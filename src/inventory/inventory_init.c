/*
** EPITECH PROJECT, 2023
** CSFML THE lAST OF US INVENTORY
** File description:
** inventory_init
*/

#include "../../include/inventory.h"

box_t *box_init()
{
    box_t *box = malloc(sizeof(box_t));
    static int uuid = 0;

    box->button = NULL;
    box->item = NULL;
    box->uuid = uuid++;
    return box;
}

void inventory_init_boxes(inventory_t *inventory)
{
    for (int i = 0; i < inventory->item_max; i++)
        push_back(&inventory->boxes, "box", box_init(), BOX);
}

inventory_t *inventory_init()
{
    inventory_t *inventory = malloc(sizeof(inventory_t));

    inventory->items = NULL;
    inventory->is_open = false;
    inventory->open = &inventory_open;
    inventory->close = &inventory_close;
    inventory->_switch = &inventory_switch;
    inventory->item_max = 8;
    inventory->item_col = 4;
    inventory->boxes = NULL;
    inventory->current_box = 0;
    inventory->current_title = NULL;
    inventory->current_description = NULL;
    inventory_init_boxes(inventory);
    return inventory;
}
