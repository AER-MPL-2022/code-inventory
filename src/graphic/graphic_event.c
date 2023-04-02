/*
** EPITECH PROJECT, 2023
** CSFML THE lAST OF US INVENTORY
** File description:
** graphic_event
*/

#include "../../include/project.h"

void graphic_key_event(project_t *project, sfKeyCode key)
{
    // ------------------------------ //
    // * STEP 1: Add inventory keys * //
    // ------------------------------ //

    switch (key) {
        // TODO : when you press tab, it switch on / off the inventory
        case sfKeyTab : project->inventory->_switch(project); break; // You have to re-code this function "src/inventory/inventory_event.c"
        case sfKeyEscape : sfRenderWindow_close(WINDOW); break;
        // TODO : when you press A, it add 1 pistol to the inventory (Re-Code it when you have add the add item function)
        // TODO : when you press B, it add 15 bullets to the inventory (Re-Code it when you have add the add item function)
        // TODO : when you press X, it drop 1 pistol from the inventory (Re-Code it when you have add the drop item function)
        default : break;
    }
}

void graphic_mouse_event(project_t *project, sfEvent *event)
{
    sfVector2i mp = sfMouse_getPositionRenderWindow(WINDOW);
    bool click = (event->type == sfEvtMouseButtonPressed && event->mouseButton.button == sfMouseLeft);

    inventory_mouse_event(project, mp, click);
}

void graphic_event(project_t *project)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(WINDOW, &event)) {
        graphic_mouse_event(project, &event);
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(WINDOW);
        if (event.type == sfEvtKeyPressed)
            graphic_key_event(project, event.key.code);
    }
}
