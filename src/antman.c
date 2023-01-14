/*
** EPITECH PROJECT, 2022
** B-CPE-110-TLS-1-1-antman-mathieu.boschet
** File description:
** read.c
*/

#include "my.h"

int antman(int file_size, char **argv)
{
    char *content = read_file(file_size, argv);
    printf("%s", content);
    return 0;
}