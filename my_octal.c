/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-cedric.hoarau-de-boisvilliers
** File description:
** my_octal.c
*/

#include "my.h"

void my_octal(int nb)
{
    int i = 0;
    char *str = malloc(sizeof(char) * count_nb(nb));

    while (nb != 0) {
        str[i] = (nb % 8) + 48;
        i++;
        nb = nb / 8;
    }
    reverse_string(str);
    free(str);
}
