/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** my_uflag.c
*/

#include "my.h"

void my_uflag(unsigned int nb)
{
    int x = 1;
    int i = 0;
    char *res = NULL;

    while ((nb / x) >= 10) {
        x *= 10;
    }
    res = malloc(sizeof(char) * (x + 1));
    while (x > 0) {
        res[i] = (nb / x) % 10 + '0';
        x /= 10;
        i++;
    }
    my_putstr(res);
    free(res);
}
