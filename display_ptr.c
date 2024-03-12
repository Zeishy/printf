/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** display_ptr.c
*/

#include "my.h"

void display_ptr(va_list ap)
{
    my_putstr("0x");
    my_hex(va_arg(ap, int));
}
