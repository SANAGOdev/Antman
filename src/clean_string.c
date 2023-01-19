/*
** EPITECH PROJECT, 2022
** antman
** File description:
** count_occurences.c
*/

#include "my.h"

char *clean_string(char *str)
{
    char *res = malloc(sizeof(char) * sizeof(str));
    int i = 0, j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            res[j] = str[i];
            j++;
        }
    }
    res[j] = '\0';
    return res;
}