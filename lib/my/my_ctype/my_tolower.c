/*
** EPITECH PROJECT, 2021
** my_tolower.c
** File description:
** Turns an upper case letter into a lower case letter.
*/

#include "my_ctype.h"

char my_tolower(char c)
{
    return ((my_isupper(c) == 1) ? (c + 32) : c);
}