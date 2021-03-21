/*
** EPITECH PROJECT, 2021
** my_isxdigit.c
** File description:
** Checks whether a character is a hexadecimal digit.
*/

#include "my_ctype.h"

int my_isxdigit(char c)
{
    int recup = my_isdigit(c) == 1;

    return ((recup == 1) || (c >= 'A' && c <= 'F') || (c >= 'a' && c <= 'f'));
}