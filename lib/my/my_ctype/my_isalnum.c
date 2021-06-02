/*
** EPITECH PROJECT, 2020
** my_isalnum.c
** File description:
** tests if the character is alphanumeric.
*/

#include "my_ctype.h"

int my_isalnum(char c)
{
    return ((my_isalpha(c) == 1) || (my_isdigit(c) == 1));
}