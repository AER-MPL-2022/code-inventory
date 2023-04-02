/*
** EPITECH PROJECT, 2023
** CSFML THE lAST OF US INVENTORY
** File description:
** graphic_state
*/

#include "../../include/project.h"

void graphic_button_hover(button_t *button)
{
    button->state = HOVER;
    button->rect.left = (button->size.x/3);
}

void graphic_button_idle(button_t *button)
{
    button->state = IDLE;
    button->rect.left = 0;
}

void graphic_button_click(button_t *button, project_t *project)
{
    button->state = CLICK;
    button->rect.left = (button->size.x/3)*2;

    // TODO: Set the current box to the button's uuid (use inventory_get_uuid_by_button())
    // ...

    inventory_update(project);
}
