/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** mem_alloc_2d_array
*/

#include <stdlib.h>
#include <my.h>

char **mem_alloc_2d_array(int nb_rows, int nb_cols)
{
    char **arr = malloc(sizeof(char *) * nb_rows);

    for (int i = 0; i < nb_rows; i++) {
        arr[i] = malloc(sizeof(char) * nb_cols + 1);
    }
    for (int i = 0; i < nb_rows; i++) {
        for (int j = 0; j < nb_cols + 1; j++) {
            arr[i][j] = '\0';
        }
    }
    return arr;
}