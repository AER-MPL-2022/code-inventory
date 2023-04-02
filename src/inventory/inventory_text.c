/*
** EPITECH PROJECT, 2023
** CSFML THE lAST OF US INVENTORY
** File description:
** inventory_text
*/

#include "../../include/project.h"

void inventory_set_title(project_t *project, char *title)
{
    (void)(project); // TODO: remove this line
    (void)(title); // TODO: remove this line
    // TODO: Set or Update the title of the inventory
}

void inventory_set_description(project_t *project, char *description)
{
    (void)(project); // TODO: remove this line
    (void)(description); // TODO: remove this line
    // TODO: Set or Update the description of the inventory
}

// ----------------------------------------- //
// * STEP 8: Update text for the inventory * //
// ----------------------------------------- //

void inventory_text_update(project_t *project)
{
    (void)(project); // TODO: remove this line

    // TODO: Get the current box with the inventory_get_box function;
    // box_t *box = ???

    // TODO: Update the title and the description of the inventory
    // Set title to "No item selected" if the box is NULL or if the box doesn't have an item
    // Set description to "?" if the box is NULL or if the box doesn't have an item

    // Set title to the id of the item if the box is not NULL and if the box has an item
    // Set description to the description of the item if the box is not NULL and if the box has an item

    // TODO: Update the item if the box is not NULL and if the box has an item
}
