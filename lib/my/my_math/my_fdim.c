/*
** EPITECH PROJECT, 2021
** my_fdim.c
** File description:
** the positive difference between two numbers
*/

#include "my_math.h"

double my_fdim(double x, double y)
{
    return (MAX(x-y, 0));
}