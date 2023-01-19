/*
** EPITECH PROJECT, 2022
** antman
** File description:
** main.c
*/

#include "my.h"

int main(int argc, char *argv[])
{
    int file_size = get_size(argv);
    antman(file_size, argv);
    return 0;
}
