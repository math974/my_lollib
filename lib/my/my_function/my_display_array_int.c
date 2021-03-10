/*
** EPITECH PROJECT, 2021
** my_display_array_int.c
** File description:
** display array int
*/

#include "my_stdio.h"

void my_display_array_int(char **array, int size)
{
    int i = 0;

    while (i < size) {
        my_printf("[%d] : %d\n", i, array[i]);
        i = i + 1;
    }
}