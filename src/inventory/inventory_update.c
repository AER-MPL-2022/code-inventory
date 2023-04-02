/*
** EPITECH PROJECT, 2023
** CSFML THE lAST OF US INVENTORY
** File description:
** inventory_update
*/

#include "../../include/project.h"
#include <string.h>

void update_inventory_box(inventory_t *inventory, item_t *item)
{
    (void)inventory; // TODO: Remove this line when you implement the function
    (void)item; // TODO: Remove this line when you implement the function

    //box_t *box;

    // TODO: Iterate through the boxes in the inventory
    //for (list_t *tmp = inventory->boxes; tmp; tmp = tmp->next) {
        // TODO: Get the current box from the list element
        //box = ???

        // TODO: If the current box is empty (item is NULL), update the box with the new item
        //if (box->item == NULL) {
            // TODO: Assign the new item to the box
            //box->item = ???

            // TODO: Free the memory of the previous ID and set the new ID from the item

            // TODO: Update the item and its box using the item_update() function

            // TODO: Exit the loop as the item has been added to the box
        //}
    //}
}


void inventory_action_exists(project_t *project)
{
    if (inventory_get_box(project->inventory, project->inventory->current_box)->item == NULL) {
        delete(&project->graphic->objects, "x_action");
        delete(&project->graphic->texts, "x_action");
    }
}

void inventory_action_not_exists(project_t *project)
{
    text_t *text;

    if (inventory_get_box(project->inventory, project->inventory->current_box)->item != NULL) {
        create_object(project->graphic, "x_action", "x.png", (sfVector2f){1227, 870});
        text = create_text(project->graphic, "Remove item", 20, "x_action");
        sfText_setPosition(text->text, (sfVector2f){1270, 875});
    }
}

void inventory_update(project_t *project)
{
    if (project->inventory->is_open) {
        inventory_text_update(project);
        if (get(project->graphic->objects, "x_action") != NULL)
            inventory_action_exists(project);
        else
            inventory_action_not_exists(project);
    }
}

void inventory_organize(inventory_t *inventory)
{
    box_t *box;
    box_t *prev = NULL;

    for (list_t *tmp = inventory->boxes; tmp; tmp = tmp->next) {
        box = (box_t *)tmp->element;

        if (prev != NULL) {
            if (prev->item == NULL && box->item != NULL) {
                prev->item = box->item;
                box->item = NULL;
                inventory_organize(inventory);
            }
        }
        prev = box;
    }
}