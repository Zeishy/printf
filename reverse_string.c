/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-cedric.hoarau-de-boisvilliers
** File description:
** reverse_string.c
*/

#include "my.h"

char *reverse_string(char *str)
{
    char c;
    int i = 0;
    int len = my_strlen(str) - 1;

    while (i < len) {
        c = str[len];
        str[len] = str[i];
        str[i] = c;
        len = len - 1;
        i = i + 1;
    }
    my_putstr(str);
    return (str);
}
