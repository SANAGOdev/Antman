/*
** EPITECH PROJECT, 2022
** B-CPE-110-TLS-1-1-antman-mathieu.boschet
** File description:
** main.c
*/

#include "my.h"

int main(int argc, char *argv[])
{
    struct stat st;
    stat(argv[1], &st);
    int file_size = st.st_size;
    antman(file_size, argv);
    return 0;
}
