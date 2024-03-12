/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-cedric.hoarau-de-boisvilliers
** File description:
** display_string.c
*/

#include "my.h"

void display_string(va_list ap)
{
    my_putstr(va_arg(ap, char *));
}
