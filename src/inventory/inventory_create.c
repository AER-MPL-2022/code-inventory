/*
** EPITECH PROJECT, 2023
** CSFML THE lAST OF US INVENTORY
** File description:
** inventory_create
*/

#include "../../include/project.h"

void add_button_to_box(inventory_t *inventory, button_t *button)
{
    box_t *box;

    for (list_t *tmp = inventory->boxes; tmp; tmp = tmp->next) {
        box = (box_t *)tmp->element;
        if (box->button == NULL) {
            box->button = button;
            return;
        }
    }
}

button_t *init_button(project_t *project, sfVector2f pos)
{
    button_t *button = create_button(project->graphic, "item_block", "item_block.png", pos);

    button->hover = &graphic_button_hover;
    button->idle = &graphic_button_idle;
    button->click = &graphic_button_click;
    add_button_to_box(project->inventory, button);
    return button;
}

void instantiate_items(project_t *project)
{
    box_t *box;

    for (list_t *tmp = project->inventory->boxes; tmp; tmp = tmp->next) {
        box = tmp->element;
        if (box->item != NULL && box->item->object == NULL) {
            instantiate_item(box->item, project->graphic);
            item_update(box);
        }
    }
}

// ---------------------------------------- //
// * STEP 3: Create the inventory objects * //
// ---------------------------------------- //

void inventory_create_elements(project_t *project)
{
    (void)project; // TODO: Remove this line

    // TODO: Initialize x and y coordinates
    //int x = 1227;
    //int y = 543;

    // TODO: Loop through the items in the inventory
    //for (int i = 0; i < project->inventory->item_max; i++) {
        // TODO: If the current item is in a new row, reset the x coordinate and increase the y coordinate
        // if (i % (project->inventory->item_col) == 0 && i != 0) {
            // x = ...
            // y += ...
        // } else if (i != 0) {
            // Increase the x coordinate
            // ...
        // }

        // TODO: Initialize a button for each item using init_button() function
        // init_button(project, (sfVector2f){x, y});
    //}

    // TODO: Instantiate the items using the instantiate_items() function
    // ...

    // TODO: Update the inventory text using the inventory_text_update() function
    // ...
}

