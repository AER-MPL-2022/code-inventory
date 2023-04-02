/*
** EPITECH PROJECT, 2023
** CSFML THE lAST OF US INVENTORY
** File description:
** graphic_draw
*/

#include "../../include/graphic.h"

void draw_buttons(graphic_t *graphic)
{
    list_t *buttons = graphic->buttons;

    for (; buttons != NULL; buttons = buttons->next) {
        sfSprite_setTextureRect(((button_t *)buttons->element)->sprite, ((button_t *)buttons->element)->rect);
        sfRenderWindow_drawSprite(graphic->window, ((button_t *)buttons->element)->sprite, NULL);
    }
}

void draw_objects(graphic_t *graphic)
{
    list_t *objects = graphic->objects;

    for (; objects != NULL; objects = objects->next)
        sfRenderWindow_drawSprite(graphic->window, ((object_t *)objects->element)->sprite, NULL);
}

void draw_texts(graphic_t *graphic)
{
    list_t *texts = graphic->texts;

    for (; texts != NULL; texts = texts->next)
        sfRenderWindow_drawText(graphic->window, ((text_t *)texts->element)->text, NULL);
}

void graphic_draw(graphic_t *graphic)
{
    sfRenderWindow_clear(graphic->window, sfBlack);
    draw_objects(graphic);
    draw_buttons(graphic);
    draw_texts(graphic);
    sfRenderWindow_display(graphic->window);
}
