/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** display_unsigned_int.c
*/

#include "my.h"

void display_unsigned_int(va_list ap)
{
    my_uflag(va_arg(ap, unsigned int));
}
