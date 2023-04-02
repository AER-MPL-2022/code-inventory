/*
** EPITECH PROJECT, 2023
** CSFML THE lAST OF US INVENTORY
** File description:
** inventory_destroy
*/

#include "../../include/project.h"

void remove_box_buttons(project_t *project)
{
    for (list_t *tmp = project->inventory->boxes; tmp; tmp = tmp->next) {
        ((box_t *)tmp->element)->button = NULL;
        if (((box_t *)tmp->element)->item != NULL) {
            delete(&project->graphic->objects, ((box_t *)tmp->element)->item->id);
            delete(&project->graphic->texts, ((box_t *)tmp->element)->item->id);
            ((box_t *)tmp->element)->item->object = NULL;
        }
    }
}

// ------------------------------------ //
// * STEP 4: Destroy all the elements * //
// ------------------------------------ //

void inventory_destroy_elements(project_t *project)
{
    (void)project;

    // Initialize a button_t pointer
    // button_t *button;

    // Remove all "item_block" buttons using a loop
    // while ((button = get(project->graphic->buttons, "item_block")) != NULL) {
        // Delete the button using delete() function
        // ...
    // }

    // Remove box buttons using remove_box_buttons() function
    // ...

    // Set the current title and description to NULL
    // ...

    // Delete the inventory title, description, x_action objects, and x_action texts {"inventory_title", "inventory_description", "x_action"}
    // using delete() function
    // ...
    // ...
    // ...
    // ...
}
