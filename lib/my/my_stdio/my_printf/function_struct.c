/*
** EPITECH PROJECT, 2020
** function_stuct.c
** File description:
** function struct printf
*/

#include "my_stdio.h"

void my_put_nbr_struct(va_list list)
{
    my_put_nbr(va_arg(list, int));
}

void my_putstr_struct(va_list list)
{
    my_putstr(va_arg(list, char *));
}

void my_put_strS_struct(va_list list)
{
    my_put_strS(va_arg(list, char *));
}

void my_putchar_struct(va_list list)
{
    my_putchar(va_arg(list, int));
}

void my_puthex_struct(va_list list)
{
    my_put_hex(va_arg(list, int));
}
