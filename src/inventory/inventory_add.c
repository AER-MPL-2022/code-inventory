/*
** EPITECH PROJECT, 2023
** CSFML THE lAST OF US INVENTORY
** File description:
** inventory_add
*/

#include "../../include/project.h"
#include <string.h>

void instantiate_item(item_t *item, graphic_t *graphic)
{
    (void)graphic; // TODO: Remove this line
    (void)item; // TODO: Remove this line

    // TODO: Allocate memory for the item image file path, taking into account the size of the required character strings
    // char *path = ...

    // TODO: Concatenate "items/" to the beginning of the path
    // ...

    // TODO: Concatenate the item's ID to the path
    // ...

    // TODO: Concatenate the ".png" extension to the end of the path
    // ...

    // TODO: Create a new graphical object with the previously defined information and assign it to the item
    // item->object = ...

    // TODO: Create a text representing the item's quantity and assign it to the item
    // item->str_quantity = ...

    // TODO: Free the memory allocated for the image file path
    // ...
}


// -------------------------- //
// * STEP 6: Add a new item * //
// -------------------------- //

item_t *inventory_add(project_t *project, const char *id, int quantity)
{
    (void)project; // TODO: Remove this line
    (void)id; // TODO: Remove this line
    (void)quantity; // TODO: Remove this line

    // TODO: Check if the item already exists in the inventory
    // item_t *item = item_already_exists(project, id, quantity) -> code in src/inventory/item/item.c

    // TODO: If the item is not NULL (it already exists), return it

    // TODO: If the item is NULL (it doesn't exist), create it
    // item = item_create(id, quantity) -> code in src/inventory/item/item.c

    // TODO: If the inventory is open, instantiate the item
    // Call the function instantiate_item

    // TODO: Add the item to the inventory
    // Call the function update_inventory_box -> code in src/inventory/inventory_update.c

    // TODO: Update the inventor
    // Call the function inventory_update

    //return item;
    return NULL;
}
