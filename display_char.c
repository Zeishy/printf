/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-cedric.hoarau-de-boisvilliers
** File description:
** display_char.c
*/

#include "my.h"

void display_char(va_list ap)
{
    my_putchar(va_arg(ap, int));
}
