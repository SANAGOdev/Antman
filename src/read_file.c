/*
** EPITECH PROJECT, 2022
** antman
** File description:
** read_file.c
*/

#include "my.h"

char *read_file(int file_size, char **argv)
{
    int fd;
    int ret;
    char *buf = malloc(sizeof(char) * file_size + 1);
    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
        exit(84);
    ret = read(fd, buf, file_size);
    buf[ret] = '\0';
    close (fd);
    return buf;
}