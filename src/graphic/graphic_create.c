/*
** EPITECH PROJECT, 2023
** CSFML THE lAST OF US INVENTORY
** File description:
** graphic_create
*/

#include "../../include/graphic.h"
#include "../../include/utils.h"
#include <string.h>

object_t *create_object(graphic_t *graphic, const char *id, char *path, sfVector2f pos)
{
    object_t *object = malloc(sizeof(object_t));

    object->texture = sfTexture_createFromFile(cat("./assets/", path), NULL);
    object->sprite = sfSprite_create();
    sfSprite_setTexture(object->sprite, object->texture, sfFalse);
    sfSprite_setPosition(object->sprite, pos);
    push_back(&graphic->objects, id, object, OBJECT);
    return object;
}

void destroy_object(object_t *object)
{
    sfSprite_destroy(object->sprite);
    sfTexture_destroy(object->texture);
    free(object);
}

button_t *create_button(graphic_t *graphic, const char *id, char *path, sfVector2f pos)
{
    button_t *button = malloc(sizeof(button_t));

    button->texture = sfTexture_createFromFile(cat("./assets/", path), NULL);
    button->sprite = sfSprite_create();
    button->state = IDLE;
    button->size = sfTexture_getSize(button->texture);
    button->rect = (sfIntRect){0, 0, button->size.x / 3, button->size.y};
    sfSprite_setTexture(button->sprite, button->texture, sfFalse);
    sfSprite_setPosition(button->sprite, pos);
    push_back(&graphic->buttons, id, button, BUTTON);
    return button;
}

void destroy_button(button_t *button)
{
    sfSprite_destroy(button->sprite);
    sfTexture_destroy(button->texture);
    free(button);
}
