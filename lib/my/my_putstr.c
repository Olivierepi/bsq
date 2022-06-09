/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** my_putstr
*/

#include <unistd.h>

int my_strlen(char const *str);

void my_putstr(char const *str)
{
    int len = my_strlen(str);
    write(1, str, len);
}