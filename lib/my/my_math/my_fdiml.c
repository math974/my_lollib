/*
** EPITECH PROJECT, 2021
** my_fdiml.c
** File description:
** the positive difference between two numbers
*/

#include "my_math.h"

long double my_fdiml(long double x, long double y)
{
    return (MAX(x-y, 0));
}