/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** my_intlen.c
*/

#include "my.h"

int my_intlen(int nb)
{
    int i = 0;

    for (int x = 1; nb / x >= 10; i++) {
        x *= 10;
    }
    return i + 1;
}
