/*
** EPITECH PROJECT, 2022
** B-CPE-110-TLS-1-1-antman-mathieu.boschet
** File description:
** my_putc.c
*/

#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
