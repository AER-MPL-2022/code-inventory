/*
** EPITECH PROJECT, 2023
** CSFML THE lAST OF US INVENTORY
** File description:
** inventory_getters
*/

#include "../../include/inventory.h"

box_t *inventory_get_box(inventory_t *inventory, int uuid)
{
    for (list_t *tmp = inventory->boxes; tmp; tmp = tmp->next) {
        if (((box_t *)tmp->element)->uuid == uuid)
            return (box_t *)tmp->element;
    }
    return NULL;
}

int inventory_get_uuid_by_button(inventory_t *inventory, button_t *button)
{
    for (list_t *tmp = inventory->boxes; tmp; tmp = tmp->next) {
        if (((box_t *)tmp->element)->button == button)
            return ((box_t *)tmp->element)->uuid;
    }
    return 0;
}
