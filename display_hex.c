/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-cedric.hoarau-de-boisvilliers
** File description:
** display_hex.c
*/

#include "my.h"

void display_hexa(va_list ap)
{
    my_hex(va_arg(ap, int));
}
