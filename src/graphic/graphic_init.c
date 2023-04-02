/*
** EPITECH PROJECT, 2023
** CSFML THE lAST OF US INVENTORY
** File description:
** graphic_init
*/

#include "../../include/graphic.h"

graphic_t *graphic_init()
{
    graphic_t *graphic = malloc(sizeof(graphic_t));
    sfVideoMode mode = (sfVideoMode){1920, 1080, 32};

    graphic->window = sfRenderWindow_create(mode, "CSFML THE lAST OF US INVENTORY", sfClose | sfFullscreen, NULL);
    graphic->objects = NULL;
    graphic->buttons = NULL;
    graphic->texts = NULL;
    return graphic;
}
