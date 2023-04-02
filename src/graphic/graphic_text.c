/*
** EPITECH PROJECT, 2023
** CSFML THE lAST OF US INVENTORY
** File description:
** graphic_text
*/

#include "../../include/graphic.h"

text_t *create_text(graphic_t *graphic, char *str, int size, char *id)
{
    text_t *text = malloc(sizeof(text_t));

    text->text = sfText_create();
    text->font = sfFont_createFromFile("assets/arial.ttf");
    sfText_setString(text->text, str);
    sfText_setFont(text->text, text->font);
    sfText_setCharacterSize(text->text, size);
    sfText_setColor(text->text, sfWhite);
    sfText_setPosition(text->text, (sfVector2f){0, 0});
    push_back(&graphic->texts, id, text, TEXT);
    return text;
}

void destroy_text(text_t *text)
{
    sfText_destroy(text->text);
    sfFont_destroy(text->font);
    free(text);
}
