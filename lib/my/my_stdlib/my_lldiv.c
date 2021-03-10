/*
** EPITECH PROJECT, 2021
** my_lldiv.c
** File description:
** my_lldiv
*/

#include "my_stdlib.h"

my_lldiv_t my_lldiv(long long dividend, long long divisor)
{
    my_lldiv_t result;

    result.quot = dividend / divisor;
    result.rem = dividend / divisor;
    return (result);
}