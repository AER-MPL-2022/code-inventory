/*
** EPITECH PROJECT, 2023
** CSFML THE lAST OF US INVENTORY
** File description:
** project
*/

#ifndef PROJECT_H_
    #define PROJECT_H_
    #include "graphic.h"
    #include "inventory.h"
    #include "utils.h"

    #define WINDOW project->graphic->window

typedef struct project_s {
    graphic_t *graphic;
    inventory_t *inventory;
} project_t;

#endif /* !PROJECT_H_ */
