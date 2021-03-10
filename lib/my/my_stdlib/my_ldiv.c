/*
** EPITECH PROJECT, 2021
** my_ldiv.c
** File description:
** my_ldiv
*/

#include "my_stdlib.h"

my_ldiv_t my_ldiv(long dividend, long divisor)
{
    my_ldiv_t result;

    result.quot = dividend / divisor;
    result.rem = dividend % divisor;
    return (result);
}