/*
** EPITECH PROJECT, 2023
** CSFML THE lAST OF US INVENTORY
** File description:
** item
*/

#include "../../../include/project.h"
#include <string.h>

item_t *item_already_exists(project_t *project, const char *id, int quantity)
{
    (void)(project); // TODO: remove this line
    (void)(id); // TODO: remove this line
    (void)(quantity); // TODO: remove this line

    // TODO: Get the box containing the item with the specified ID from the project's inventory using the get_item() function
    // box_t *box = ...

    // TODO: Get the item from the box if it exists, otherwise set the item to NULL
    // item_t *item = ...

    // If the item exists, update its quantity and related information
    //if (item != NULL) {
        // TODO: Increase the item's quantity by the provided quantity
        // ...

        // TODO: If the project's inventory is open, update the item and its box using the item_update() function
        // ...

        // TODO: Update the project's inventory using the inventory_update() function
        // ...

        // TODO: Return the updated item
        // ...
    //}

    // TODO: If the item does not exist, return NULL
    // ...
    return NULL;
}


item_t *item_create(const char *id, int quantity)
{
    (void)(id); // TODO: remove this line
    (void)(quantity); // TODO: remove this line

    // TODO: Allocate memory for the item
    //item_t *item = ???

    // TODO: Set the id of the item

    // TODO: Set the quantity of the item

    // TODO: Set the object(NULL) of the item

    // TODO: RETURN the item
    return NULL;
}

void item_update(box_t *box)
{
    if (box->button == NULL || box->item->object == NULL)
        return;

    sfSprite_setPosition(box->item->object->sprite, get_centered_position(box->button, box->item->object));
    sfText_setString(box->item->str_quantity->text, itoa(box->item->quantity));
    sfText_setPosition(box->item->str_quantity->text, get_right_bottom_position(box->button, box->item->str_quantity));
}
