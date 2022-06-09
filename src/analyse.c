/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** analyse
*/

#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include <my.h>

void replace(char **map, map_info_t *map_info);

int is_valid(char **map, int y, int x, int size_square)
{
    for (int a = y; a < size_square + y;a++) {
        for (int b = x; b < size_square + x;b++) {
            if (map[a][b] == '.') {
                continue;
            }
            return 0;
        }
    }
    return 1;
}

int size_square(char **map, int y, int x)
{
    int size_square = 1;

    while (is_valid(map, y, x, size_square) == 1) {
        size_square++;
    }
    return size_square - 1;
}

void print_array(char **map, map_info_t *map_info)
{
    for (int i = 0; i < map_info->lines - 1; i++) {
        my_putstr(map[i]);
        my_putchar('\n');
    }
}

char **analyse_map(char **map, map_info_t *map_info)
{
    map_info->biggest_square = - 1;
    for (int i = 0; i < map_info->lines; i++) {
        for (int j = 0; j < map_info->columns; j++) {
            int find_biggest = size_square(map, i, j);
            if (find_biggest > map_info->biggest_square) {
                map_info->biggest_square = find_biggest;
                map_info->x_biggest_square = j;
                map_info->y_biggest_square = i;
            }
        }
    }
    replace(map, map_info);
    print_array(map, map_info);
    return map;
}