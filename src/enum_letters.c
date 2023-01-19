/*
** EPITECH PROJECT, 2022
** antman
** File description:
** enum_letters.c
*/

#include "my.h"

char *enum_letters(char *content)
{
    int i = 0, j = 0, k = 0;
    int len = my_strlen(content);
    char *res = malloc(sizeof(char) * len);
    for (i = 0; i < len; i++) {
        for (j = 0; j < len; j++) {
            if (content[i] == content[j])
                break;
        }
        if (i == j) {
            res[k] = content[i];
            k++;
        }
    }
    return res;
}
