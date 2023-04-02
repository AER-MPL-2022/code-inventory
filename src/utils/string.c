/*
** EPITECH PROJECT, 2023
** CSFML THE lAST OF US INVENTORY
** File description:
** string
*/

#include "../../include/project.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *itoa(int num)
{
    char *str_num = malloc(sizeof(char) * 12);

    snprintf(str_num, 12, "%d", num);
    return str_num;
}

char *cat(char *str, char *str2)
{
    char *new_str = malloc(sizeof(char) * (strlen(str) + strlen(str2) + 1));

    strcpy(new_str, str);
    strcat(new_str, str2);
    return new_str;
}

char *scan(item_t *item)
{
    struct stat scan;
    char *filepath = cat(cat("./assets/items/", item->id), ".txt");
    char *buffer = NULL;
    int fd = 0;

    fd = open(filepath, O_RDONLY);
    stat(filepath, &scan);
    buffer = malloc(sizeof(char) * scan.st_size + 1);
    buffer[scan.st_size] = '\0';
    if (read(fd, buffer, scan.st_size) < 0) {
        close(fd);
        free(buffer);
        free(filepath);
        return NULL;
    }
    close(fd);
    free(filepath);
    return buffer;
}
