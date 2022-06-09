/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** map_to_array
*/

#include <stdlib.h>
#include <stdio.h>
#include <my.h>

char *map_buffer(const char *filepath);
int map_count_columns(const char *filepath);
int map_count_lines(const char *filepath);
char **mem_alloc_2d_array(int nb_rows, int nb_cols);

int sup_firstline(char *str)
{
    int a = 0;
    for (;str[a] != '\n';a++);
    a += 1;
    return a;
}

char **array_mem(int lines, int columns)
{
    char **array = malloc(sizeof(char *) * lines*300);

    for (int i = 0; i < lines;i++) {
        array[i] = malloc(columns);
    }
    return array;
}

char **map_to_array(char *buffer, map_info_t *map_info)
{
    int a = sup_firstline(buffer);
    map_info->columns = map_count_columns(buffer);
    map_info->lines = map_count_lines(buffer);
    char **array = mem_alloc_2d_array(map_info->lines, map_info->columns);

    for (int i = 0; i < map_info->lines - 1;i++) {
        for (int j = 0; j < map_info->columns;j++) {
            if (buffer[a] == '\n') {
                a += 1;
            }
            array[i][j] = buffer[a];
            a += 1;
        }
    }
    free(buffer);
    return array;
}
