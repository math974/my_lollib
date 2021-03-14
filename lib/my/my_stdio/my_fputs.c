/*
** EPITECH PROJECT, 2021
** my_fputs.c
** File description:
** my_fputs
*/

#include "my_stdio.h"

int my_fputs(const char *string, FILE *stream)
{
    for (int i = 0; string[i] != '\0'; i++)
        my_fputc(string[i], stream);
    return (0);
}