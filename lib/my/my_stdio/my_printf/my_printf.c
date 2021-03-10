/*
** EPITECH PROJECT, 2020
** my_printf.c
** File description:
** function display many type
*/

#include "my_stdio.h"
#include <stdarg.h>

void formatting(const char *format, va_list list, int *i)
{
    display_t tab[] = {
        {"d", &my_put_nbr_struct},
        {"i", &my_put_nbr_struct},
        {"c", &my_putchar_struct},
        {"C", &my_putchar_struct},
        {"s", &my_putstr_struct},
        {"S", &my_put_strS_struct},
        {"x", &my_puthex_struct},
        {"X", &my_puthex_maj_struct},
        {"o", &my_putoct_struct},
        {"p", &my_put_ptr_struct},
        {"u", &my_put_nbru_struct},
        {"b", &my_put_bin_struct},
        {"f", &my_put_float_struct}
    };
    loop_format(format, list, i, tab);
}

void loop_format(const char *format, va_list list, int *i, display_t *tab)
{
    int i_compt = 0;
    int i_space = 0;

    while (format[*i] == ' ') {
        *i = *i + 1;
        i_space = i_space + 1;
        if (i_space == 1)
            my_putchar(' ');
    }
    while (i_compt < 13) {
        if (tab[i_compt].diplay[0] == format[*i]) {
            tab[i_compt].format(list);
        }
        i_compt = i_compt + 1;
    }
    if (format[*i] == '%') {
        my_putchar('%');
    }
}

int my_printf(const char *format, ...)
{
    va_list list;
    int i = 0;

    va_start(list, format);
    while (format[i] != '\0') {
        if (format[i] == '%') {
            i = i + 1;
            formatting(format, list, &i);
        }
        else {
            my_putchar(format[i]);
        }
        i = i + 1;
    }
    va_end(list);
    return (0);
}