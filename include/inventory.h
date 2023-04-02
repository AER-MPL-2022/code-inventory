/*
** EPITECH PROJECT, 2023
** *
** File description:
** inventory
*/

#ifndef INVENTORY_H_
    #define INVENTORY_H_
    #include <stdbool.h>
    #include "utils.h"
    #include "graphic.h"

typedef struct project_s project_t;

typedef struct item_s {
    object_t *object;
    text_t *str_quantity;
    int quantity;
    char *id;
} item_t;

typedef struct box_s {
    button_t *button;
    item_t *item;
    int uuid;
} box_t;

typedef struct inventory_s {
    int item_max;
    int item_col;
    list_t *items;
    bool is_open;
    int current_box;
    list_t *boxes;
    text_t *current_title;
    text_t *current_description;
    void (*open)(project_t *project);
    void (*close)(project_t *project);
    void (*_switch)(project_t *project);
} inventory_t;

inventory_t *inventory_init();
void inventory_close(project_t *project);
void inventory_open(project_t *project);
void inventory_switch(project_t *project);
box_t *inventory_get_box(inventory_t *inventory, int uuid);
int inventory_get_uuid_by_button(inventory_t *inventory, button_t *button);
item_t *inventory_add(project_t *project, const char *id, int quantity);
void instantiate_item(item_t *item, graphic_t *graphic);
void update_inventory_box(inventory_t *inventory, item_t *item);
void inventory_text_update(project_t *project);
void inventory_update(project_t *project);
void drop_item(project_t *project, int drop);
void inventory_organize(inventory_t *inventory);
void inventory_mouse_event(project_t *project, sfVector2i mp, bool click);
void inventory_destroy_elements(project_t *project);
void inventory_create_elements(project_t *project);

item_t *item_already_exists(project_t *project, const char *id, int quantity);
item_t *item_create(const char *id, int quantity);
void item_update(box_t *box);

#endif /* !INVENTORY_H_ */