/*
** EPITECH PROJECT, 2023
** CSFML THE lAST OF US INVENTORY
** File description:
** button
*/

#include "../../include/project.h"

bool button_is_hover(button_t *button, sfVector2i mp)
{
    sfVector2f bp = sfSprite_getPosition(button->sprite);

    if (mp.x >= bp.x && mp.x <= bp.x + button->size.x/3 &&
        mp.y >= bp.y && mp.y <= bp.y + button->size.y)
        return true;
    return false;
}
