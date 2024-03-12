/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-cedric.hoarau-de-boisvilliers
** File description:
** display_binary.c
*/

#include "my.h"

void display_binary(va_list ap)
{
    my_binary(va_arg(ap, int));
}
