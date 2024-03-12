/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-cedric.hoarau-de-boisvilliers
** File description:
** main.c
*/

#include <stdarg.h>
#include "my.h"
#include "ps.h"

p_t flags[] = {
    {'s', &display_string},
    {'d', &display_int},
    {'i', &display_int},
    {'c', &display_char},
    {'C', &display_char},
    {'o', &display_octal},
    {'x', &display_hexa},
    {'X', &display_hexa},
    {'S', &display_sflag},
    {'b', &display_binary},
    {'u', &display_unsigned_int},
    {'p', &display_ptr},
    {'/', NULL}
};

void check_flags(va_list ap, char c)
{
    int i = 0;

    while (flags[i].c != '/') {
        if (flags[i].c == c)
            flags[i].disp(ap);
        i++;
    }
}

int check_format(char const *format, int i)
{
    if (format[i] == '%' && format[i + 1] == '%')
        return 1;
    return 0;
}

void my_printf(const char *format, ...)
{
    va_list ap;

    va_start(ap, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%' && format[i + 1] != '%') {
            check_flags(ap, format[i + 1]);
            i++;
            continue;
        } else if (check_format(format, i) == 1) {
            i++;
        }
        my_putchar(format[i]);
    }
    va_end(ap);
}
