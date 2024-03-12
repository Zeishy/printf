/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-cedric.hoarau-de-boisvilliers
** File description:
** display_int.c
*/

#include "my.h"

void display_int(va_list ap)
{
    my_put_nbr(va_arg(ap, int));
}
