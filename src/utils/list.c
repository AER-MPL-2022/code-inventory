/*
** EPITECH PROJECT, 2023
** CSFML THE lAST OF US INVENTORY
** File description:
** list
*/

#include "../../include/utils.h"
#include "../../include/graphic.h"
#include "../../include/inventory.h"
#include <string.h>

void push_back(list_t **list, const char *id, void *node, enum type type)
{
    list_t *tmp = (*list);
    list_t *new_node = malloc(sizeof(list_t));

    new_node->element = node;
    new_node->id = strdup(id);
    new_node->next = NULL;
    new_node->type = type;
    if ((*list) == NULL) {
        (*list) = new_node;
    } else {
        for (; tmp->next != NULL; tmp = tmp->next);
        tmp->next = new_node;
    }
}

void delete(list_t **list, const char *id)
{
    list_t *tmp = (*list);
    list_t *prev = NULL;

    for (; tmp != NULL; tmp = tmp->next) {
        if (strcmp(tmp->id, id) == 0) {
            if (prev == NULL)
                (*list) = tmp->next;
            else
                prev->next = tmp->next;
            if (tmp->type == OBJECT)
                destroy_object((object_t *)tmp->element);
            else if (tmp->type == BUTTON)
                destroy_button((button_t *)tmp->element);
            else if (tmp->type == TEXT)
                destroy_text((text_t *)tmp->element);
            return free(tmp);
        }
        prev = tmp;
    }
}

void *get(list_t *list, const char *id)
{
    list_t *tmp = list;

    for (; tmp != NULL; tmp = tmp->next) {
        if (strcmp(tmp->id, id) == 0) {
            return tmp->element;
        }
    }
    return NULL;
}

void *get_item(list_t *list, const char *id)
{
    box_t *box;

    for (list_t *tmp = list; tmp != NULL; tmp = tmp->next) {
        box = tmp->element;
        if (box->item != NULL && strcmp(box->item->id, id) == 0) {
            return tmp->element;
        }
    }
    return NULL;
}
