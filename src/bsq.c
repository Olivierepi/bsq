/*
** EPITECH PROJECT, 2021
** Sans titre(Espace de travail)
** File description:
** bsq
*/

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <my.h>

char *map_buffer(const char *filepath);
char **map_to_array(char *buffer, map_info_t *map_info);
char **analyse_map(char **map, map_info_t *map_info);

int check_file(const char *filepath)
{
    int fd = STDOUT_FILENO;
    fd = open(filepath, O_RDONLY);
    close(fd);
    return fd;
}

int main(int ac, char **av)
{
    map_info_t *map_info = malloc(sizeof(map_info_t));

    if (ac == 2) {
        if (check_file(av[1]) < 0) {
            return 84;
        }
        char *buffer = map_buffer(av[1]);
        char **map = map_to_array(buffer, map_info);
        analyse_map(map, map_info);
        free(map);
        return 0;
    } else {
        return 84;
    }
}
