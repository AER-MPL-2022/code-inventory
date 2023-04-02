/*
** EPITECH PROJECT, 2023
** CSFML THE lAST OF US INVENTORY
** File description:
** position
*/

#include "../../include/graphic.h"
#include <string.h>

sfVector2f get_centered_position(button_t *button, object_t *obj)
{
    sfVector2f pos = {0, 0};
    sfVector2f button_pos = sfSprite_getPosition(button->sprite);
    sfVector2u obj_size = sfTexture_getSize(obj->texture);

    pos.x = (button_pos.x + ((button->size.x/3) / 2)) - (obj_size.x / 2);
    pos.y = (button_pos.y + (button->size.y / 2)) - (obj_size.y / 2);
    return pos;
}

sfVector2f get_right_bottom_position(button_t *button, text_t *text)
{
    sfVector2f pos = {0, 0};
    sfVector2f button_pos = sfSprite_getPosition(button->sprite);
    int size = strlen(sfText_getString(text->text));

    pos.x = (button_pos.x + (button->size.x/3)) - ((size * 5) + 15);
    pos.y = (button_pos.y + (button->size.y)) - 30;
    return pos;
}
