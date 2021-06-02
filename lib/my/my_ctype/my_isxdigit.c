/*
** EPITECH PROJECT, 2021
** my_isxdigit.c
** File description:
** Checks whether a character is a hexadecimal digit.
*/

#include "my_ctype.h"

int my_letterxdigit(char c)
{
    return ((c >= 'A' && c <= 'F') || (c >= 'a' && c <= 'f'));
}

int my_isxdigit(char c)
{
    return (my_isdigit(c) == 1 || my_letterxdigit(c) == 1);
}