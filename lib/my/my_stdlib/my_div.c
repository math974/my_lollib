/*
** EPITECH PROJECT, 2021
** my_div.c
** File description:
** return quotient and remainder
*/

#include "my_stdlib.h"

my_div_t my_div(int dividend, int divisor)
{
    my_div_t result;

    result.quot = dividend / divisor;
    result.rem = dividend % divisor;
    return (result);
}
