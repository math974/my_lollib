/*
** EPITECH PROJECT, 2020
** my_isalnum.c
** File description:
** tests if the character is alphanumeric.
*/

#include "my_ctype.h"

int my_isalnum(char c)
{
    if ((my_isalpha(c) == 1) || (my_isdigit(c) == 1))
        return (1);
    else
        return (0);
}