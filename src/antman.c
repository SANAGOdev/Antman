/*
** EPITECH PROJECT, 2022
** antman
** File description:
** read.c
*/

#include "my.h"

int antman(int file_size, char **argv)
{
    char *content = read_file(file_size, argv); // salut sa va
    printf("[%s]\n", content);
    char *clean = clean_string(content); // salutsava
    printf("[%s]\n", clean);
    char *res = enum_letters(clean); // salutv
    printf("[%s]\n", res);
    
    return 0;
}
