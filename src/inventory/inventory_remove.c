/*
** EPITECH PROJECT, 2023
** CSFML THE lAST OF US INVENTORY
** File description:
** inventory_remove
*/

#include "../../include/project.h"
#include <string.h>

// ------------------------------------ //
// * STEP 7: Remove an item from box *  //
// ------------------------------------ //

void drop_item(project_t *project, int drop)
{
    (void)(project); // TODO: remove this line
    (void)(drop); // TODO: remove this line

    // TODO: Get the current box in the inventory using inventory_get_box()
    // box_t *box = ...

    // TODO: If the box is NULL or the item in the box is NULL, return
    // ...

    // TODO: Decrease the item's quantity by the drop amount
    // ...

    // If the item's quantity is less than or equal to 0, remove the item and update the inventory
    // if (box->item->quantity <= 0) {
        // TODO: Delete the item's object and text using delete() function
        // ...
        // ...

        // TODO: Free the memory associated with the item
        // ...

        // TODO: Set the box's item to NULL
        // ...
    // }

    // TODO: Organize the inventory using inventory_organize() function
    // ...

    // TODO: Update the inventory using inventory_update() function
    // ...
}
