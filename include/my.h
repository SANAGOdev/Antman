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

    /* library files header */
    void my_putchar(char c);
    int antman(int file_size, char **argv);
    char *read_file(int file_size, char **argv);

#endif /* !MY_ */
