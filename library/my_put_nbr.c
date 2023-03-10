/*
** EPITECH PROJECT, 2022
** antman
** File description:
** my_put_nbr.c
*/

#include "my.h"

int my_put_nbr(int nb)
{
    int a;

    if (nb < 0) {
        nb = nb * (-1);
        my_putchar(nb);
    }
    if (nb >= 0) {
        if (nb >= 10){
            a = (nb % 10);
            nb = (nb - a) / 10;
            my_put_nbr(nb);
            my_putchar(48 + a);
        } else {
            a = 48 + nb % 10;
            my_putchar(a);
        }
    }
    return 0;
}
