/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-cedric.hoarau-de-boisvilliers
** File description:
** my_hex.c
*/

#include "my.h"

void my_hex(int nb)
{
    int i = 0;
    char *str = malloc(sizeof(char) * count_nb(nb));

    while (nb != 0) {
        str[i] = (nb % 16) + 48;
        i++;
        nb = nb / 16;
    }
    reverse_string(str);
    free(str);
}
