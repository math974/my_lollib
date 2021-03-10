/*
** EPITECH PROJECT, 2021
** my_strcat.c
** File description:
** string of concatenated
*/

#include <stdlib.h>
#include <my_string.h>
#include "my_stdio.h"

char *my_strcat(char *src1, char *src2)
{
    int i_new = 0;
    int size = my_strlen(src1) + my_strlen(src2);
    char *new_cat = malloc(sizeof(char) * (size + 1));

    for (int i = 0; src1[i] != '\0'; i++, i_new++)
        new_cat[i_new] = src1[i];
    for (int i = 0; src2[i] != '\0'; i++, i_new++)
        new_cat[i_new] = src2[i];
    new_cat[size + 1] = '\0';
    return (new_cat);
}