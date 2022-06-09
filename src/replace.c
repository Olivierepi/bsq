/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** replace
*/

#include <my.h>
#include <stdio.h>

void replace(char **map, map_info_t *map_info)
{
    int y = map_info->y_biggest_square;
    int x = map_info->x_biggest_square;

    for (int i = 0; i < map_info->biggest_square; i++) {
        for (int j = 0; j < map_info->biggest_square; j++) {
            map[i + y][j + x] = 'x';
        }
    }
}