/*
** EPITECH PROJECT, 2020
** my_numlen.c
** File description:
** compt number of int
*/

#include "my_stdio.h"

int my_numlen(int nb)
{
    int i = 1;
    int div = 1;

    while ((nb / div) >= 10) {
        div *= 10;
        i = i + 1;
    }
    return (i);
}