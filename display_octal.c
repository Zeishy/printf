/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-cedric.hoarau-de-boisvilliers
** File description:
** display_octal.c
*/

#include "my.h"

void display_octal(va_list ap)
{
    my_octal(va_arg(ap, int));
}
