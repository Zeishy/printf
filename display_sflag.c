/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-cedric.hoarau-de-boisvilliers
** File description:
** display_sflag.c
*/

#include "my.h"

void display_sflag(va_list ap)
{
    my_sflag(va_arg(ap, char *));
}
