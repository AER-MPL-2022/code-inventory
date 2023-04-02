/*
** EPITECH PROJECT, 2023
** CSFML THE lAST OF US INVENTORY
** File description:
** graphic
*/

#ifndef GRAPHIC_H_
    #define GRAPHIC_H_
    #include <SFML/Graphics.h>
    #include <SFML/Audio.h>
    #include <SFML/Window.h>
    #include <SFML/System.h>
    #include "utils.h"

typedef struct project_s project_t;

enum state {
    IDLE,
    HOVER,
    CLICK
};

typedef struct object_s {
    sfSprite *sprite;
    sfTexture *texture;
} object_t;

typedef struct text_s {
    sfText *text;
    sfFont *font;
} text_t;

typedef struct button_s {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2u size;
    sfIntRect rect;
    enum state state;
    void (*hover)(struct button_s *button);
    void (*click)(struct button_s *button, project_t *project);
    void (*idle)(struct button_s *button);
} button_t;

typedef struct graphic_s {
    sfRenderWindow *window;
    list_t *objects;
    list_t *buttons;
    list_t *texts;
} graphic_t;

graphic_t *graphic_init();
void graphic_draw(graphic_t *graphic);
void graphic_event(project_t *project);
object_t *create_object(graphic_t *graphic, const char *id, char *path, sfVector2f pos);
button_t *create_button(graphic_t *graphic, const char *id, char *path, sfVector2f pos);
void destroy_button(button_t *button);
void destroy_object(object_t *object);
void graphic_button_hover(button_t *button);
void graphic_button_idle(button_t *button);
void graphic_button_click(button_t *button, project_t *project);
text_t *create_text(graphic_t *graphic, char *str, int size, char *id);
void destroy_text(text_t *text);

// utils
sfVector2f get_right_bottom_position(button_t *button, text_t *text);
sfVector2f get_centered_position(button_t *button, object_t *obj);

#endif /* !GRAPHIC_H_ */
