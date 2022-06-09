/*
** EPITECH PROJECT, 2021
** Bistro-Repo
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);

typedef struct map_info_s {
    int columns;
    int lines;
    int x_biggest_square;
    int y_biggest_square;
    int biggest_square;
    char *map;
} map_info_t;

#endif