/*
** EPITECH PROJECT, 2023
** antman
** File description:
** antman
*/

#ifndef __MY_H__
    #define __MY_H__

    /* library include */
    #include <stdio.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <fcntl.h>
    #include <sys/stat.h>
    #include <sys/types.h>
    #include <string.h>

    /* library functions */
    void my_putchar(char c);
    int my_strcmp(char const *s1, char const *s2);
    int my_strlen(char const *str);
    int my_put_nbr(int nb);

    /* project functions */
    int antman(int file_size, char **argv);
    char *read_file(int file_size, char **argv);
    int get_size(char **argv);
    char *enum_letters(char *content);
    char *my_strcpy(char *dest, char *src);
    char *clean_string(char *str);

#endif /* !MY_ */
