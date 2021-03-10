/*
** EPITECH PROJECT, 2020
** my_put_float.c
** File description:
** display float
*/

#include "my_stdio.h"

void my_put_float(double nb)
{
    int i = 0;
    int integer = nb / 1;
    double commas = nb - integer;
    int result = 1;
    int mult = 10;

    while (i < 6) {
        result = commas * mult;
        mult *= 10;
        i = i + 1;
    }

    my_put_nbr(integer);
    my_putchar('.');
    my_put_nbr(result);
}