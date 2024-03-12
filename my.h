/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-cedric.hoarau-de-boisvilliers
** File description:
** my.h
*/

#ifndef MY_H_
    #define MY_H_

    #include "ps.h"
    #include <unistd.h>
    #include <stdlib.h>
    #include <stdio.h>

    void check_flags(va_list ap, char c);
    void my_putchar(char c);
    int check_digits(char c);
    int my_getnbr(char const *str);
    int my_putstr(char const *str);
    int my_put_nbr(int nbr);
    void my_printf(const char *format, ...);
    int my_strlen(char const *str);
    int my_intlen(int nb);
    void my_octal(int nb);
    int count_nb(int nb);
    int check_format(char const *format, int i);
    void my_hex(int nb);
    void my_binary(int nb);
    char *my_sflag(char *str);
    void my_uflag(unsigned int nb);
    void display_sflag(va_list ap);
    char *reverse_string(char *str);
    void display_string(va_list ap);
    void display_binary(va_list ap);
    void display_int(va_list ap);
    void display_char(va_list ap);
    void display_octal(va_list ap);
    void display_hexa(va_list ap);
    void display_unsigned_int(va_list ap);
    void display_ptr(va_list ap);

#endif /* MY_H_ */
