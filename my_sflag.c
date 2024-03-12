/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-cedric.hoarau-de-boisvilliers
** File description:
** my_Sflag.c
*/

#include "my.h"

char *my_sflag(char *str)
{
    int i = 0;

    while (str[i] != '\0' && str[i] != '%') {
        if (str[i] < 32) {
            my_putchar(92);
            my_putchar('0');
            my_octal(str[i]);
            i++;
        }
        my_putchar(str[i]);
        i++;
    }
    return (str);
}
