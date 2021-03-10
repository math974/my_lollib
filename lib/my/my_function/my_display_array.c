/*
** EPITECH PROJECT, 2021
** my_display_array.c
** File description:
** display array
*/

#include "my_stdio.h"
#include "unistd.h"

void my_display_array(char **array)
{
    int i = 0;

    while (array[i] != NULL) {
        my_printf("[%d] : %s\n", i, array[i]);
        i = i + 1;
    }
}