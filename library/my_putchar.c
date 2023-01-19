/*
** EPITECH PROJECT, 2022
** antman
** File description:
** my putchar.c
*/

#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
