/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-cedric.hoarau-de-boisvilliers
** File description:
** count_nb.c
*/

#include "my.h"

int count_nb(int nb)
{
    int i = 0;

    while (nb != 0) {
        nb = nb / 10;
        i++;
    }
    return (i);
}
