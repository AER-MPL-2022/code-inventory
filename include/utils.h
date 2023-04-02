/*
** EPITECH PROJECT, 2023
** CSFML THE lAST OF US INVENTORY
** File description:
** utils
*/

#ifndef UTILS_H_
    #define UTILS_H_
    #include "stdio.h"
    #include "stdlib.h"
    #include "stdbool.h"
    #include "SFML/Graphics.h"
    #include <stdbool.h>
    #include <sys/stat.h>
    #include <sys/types.h>
    #include <fcntl.h>
    #include <string.h>
    #include <unistd.h>

typedef struct button_s button_t;
typedef struct item_s item_t;

enum type {
    OBJECT,
    BUTTON,
    TEXT,
    BOX
};

typedef struct list_s {
    void *element;
    char *id;
    enum type type;
    struct list_s *next;
} list_t;

void push_back(list_t **list, const char *id, void *node, enum type type);
bool button_is_hover(button_t *button, sfVector2i mp);
void delete(list_t **list, const char *id);
void *get(list_t *list, const char *id);
void *get_item(list_t *list, const char *id);
char *itoa(int num);
char *cat(char *str, char *str2);
char *scan(item_t *item);

#endif /* !UTILS_H_ */
