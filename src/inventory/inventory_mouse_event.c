/*
** EPITECH PROJECT, 2023
** CSFML THE lAST OF US INVENTORY
** File description:
** inventory_mouse_event
*/

#include "../../include/project.h"

bool current_button_is_selected(project_t *project, button_t *button)
{
    box_t *box = inventory_get_box(project->inventory, project->inventory->current_box);

    if (box->button != NULL && box->button == button) {
        if (button->state != CLICK)
            graphic_button_click(button, project);
        return true;
    }
    return false;
}

// ---------------------------- //
// * STEP 5: Mouse management * //
// ---------------------------- //

void inventory_mouse_event(project_t *project, sfVector2i mp, bool click)
{
    (void)project; // TODO: remove this line
    (void)mp; // TODO: remove this line
    (void)click; // TODO: remove this line

    //box_t *current;
    //button_t *button;

    // TODO: Iterate through the boxes in the project's inventory
    // for (list_t *tmp = ...; tmp != NULL; tmp = ...) {
        // TODO: Get the current box and its button from the list element
        // current = ...
        // button = ...

        // TODO: If the button is NULL or the current button is already selected, continue to the next iteration
        // ...

        // TODO: heck if the button is being hovered over
        // if (button_is_hover(...)) {
            // If the mouse is clicked, call the modified button->click() function
            // if (click) {
                // Call the button->click() function -> this function have to be modified "src/graphic/graphic_state.c"
                // ...
            // } else {
                // Call the button->hover() function
                // ...
            // }
        // } else {
            // TODO: Call the button->idle() function
            // ...
        // }
    // }
}

