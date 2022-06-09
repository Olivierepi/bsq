/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** map_buffer
*/

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#include <my.h>

char *map_buffer(const char *filepath)
{
    struct stat file;
    stat(filepath, &file);
    char *buffer = malloc(sizeof(char) * file.st_size + 1);
    int fd = STDOUT_FILENO;

    fd = open(filepath, O_RDONLY);
    ssize_t n = read(fd, buffer, file.st_size);
    buffer[n] = '\0';
    close(fd);
    return buffer;
}
