/*
** EPITECH PROJECT, 2022
** B-CPE-110-TLS-1-1-antman-mathieu.boschet
** File description:
** get_size.c
*/

#include "my.h"

int get_size(char **argv)
{
    struct stat st;
    stat(argv[1], &st);
    int file_size = st.st_size;
    return file_size;
}