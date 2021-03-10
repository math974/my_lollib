/*
** EPITECH PROJECT, 2020
** my_compute_square_root.c
** File description:
** square root
*/
#include <stdio.h>

int my_compute_square_root(int nb)
{
    int i = 0;

    while ( i < nb) {
        i = i + 1;
        if (i * i == nb)
            return i;
    }
    return (0);
}

