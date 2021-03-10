/*
** EPITECH PROJECT, 2021
** my_indexof.c
** File description:
** return the value of the first box of the word found
*/

#include "my_string.h"
#include "stdlib.h"

int my_indexof(char *src, char *corespond)
{
    int i = 0;
    int i2 = 0;
    int i_str = 0;

    while (src[i] != '\0') {
        i_str = 0;
        i2 = i;
        while (src[i2] == corespond[i_str]) {
            if (corespond[i_str + 1] == '\0') {
                return (i);
            }
            i2++;
            i_str++;
        }
        i++;
    }
    return (-1);
}