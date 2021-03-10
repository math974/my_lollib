/*
** EPITECH PROJECT, 2020
** function_struct3.c
** File description:
** function struct
*/

#include "my_stdio.h"

void my_put_float_struct(va_list list)
{
    my_put_float(va_arg(list, double));
}