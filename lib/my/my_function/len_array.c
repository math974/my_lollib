/*
** EPITECH PROJECT, 2021
** len_array.c
** File description:
** size to array
*/

#include <unistd.h>

int len_array(char **array)
{
    int i = 0;

    while (array[i] != NULL)
        i = i + 1;
    return (i);
}