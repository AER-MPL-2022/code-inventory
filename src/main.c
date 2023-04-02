/*
** EPITECH PROJECT, 2023
** CSFML THE lAST OF US INVENTORY
** File description:
** inventory
*/

#include "../include/project.h"

void init_game(graphic_t *graphic)
{
    create_object(graphic, "background", "background.png", (sfVector2f){0, 0});
}

void main_loop(project_t *project)
{
    init_game(project->graphic);
    while (sfRenderWindow_isOpen(WINDOW)) {
        graphic_event(project);
        graphic_draw(project->graphic);
    }
}

project_t *init_project()
{
    project_t *project = malloc(sizeof(project_t));

    project->graphic = graphic_init();
    project->inventory = inventory_init();
    return project;
}

int main()
{
    project_t *project = init_project();

    main_loop(project);
    return 0;
}