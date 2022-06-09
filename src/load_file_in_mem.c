/*
** EPITECH PROJECT, 2021
** bs_bsq
** File description:
** load_file_in_mem
*/

#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#include <my.h>

char *load_file_in_mem(char const *filepath)
{
    struct stat file;
    stat(filepath, &file);

    char *buffer = malloc(sizeof(char) * file.st_size);

    int fd = STDOUT_FILENO;
    fd = open(filepath, O_RDONLY);
    ssize_t n = read(fd, buffer, file.st_size);
    buffer[n] = '\0';
    close(fd);
    return buffer;
}
