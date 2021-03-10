/*
** EPITECH PROJECT, 2020
** function_struct2.c
** File description:
** function struct
*/

#include "my_stdio.h"

void my_puthex_maj_struct(va_list list)
{
    my_put_hex_maj(va_arg(list, int));
}

void my_putoct_struct(va_list list)
{
    my_put_oct(va_arg(list, unsigned int));
}

void my_put_ptr_struct(va_list list)
{
    my_put_ptr(va_arg(list, long int));
}

void my_put_nbru_struct(va_list list)
{
    my_put_nbr(va_arg(list, unsigned int));
}

void my_put_bin_struct(va_list list)
{
    my_put_bin(va_arg(list, unsigned int));
}