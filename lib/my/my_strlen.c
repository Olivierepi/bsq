/*
** EPITECH PROJECT, 2021
** day04
** File description:
** My Strlen
*/

#include <stdio.h>

int my_strlen(char const *str)
{
    int i = 0;
    for(;str[i] != '\0';i++);
    return i;
}
