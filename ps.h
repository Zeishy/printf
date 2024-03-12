/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-cedric.hoarau-de-boisvilliers
** File description:
** struct.h
*/

#ifndef P_S_
    #define P_S_

    #include <stdarg.h>
    #include "my.h"

    typedef struct p_s
    {
        char c;
        void (*disp)(va_list ap);
    }p_t;

#endif /* P_S_ */
