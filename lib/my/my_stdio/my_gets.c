/*
** EPITECH PROJECT, 2021
** my_gets.c
** File description:
** my_gets
*/

#include <stdio.h>
#include <stddef.h>
#include "my_stdio.h"

char *my_gets(char *str)
{
    int ch = 0;
    char *ptr = str;

    while ((ch = my_getchar()) != '\n' && ch != EOF)
        *str++ = (char)ch;
    *str = '\0';
    return (ptr);
}