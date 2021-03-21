/*
** EPITECH PROJECT, 2021
** my_toupper.c
** File description:
** Turn a lower case letter into a capital letter.
*/

#include "my_ctype.h"

char my_toupper(char c)
{
    return ((my_islower(c) == 1) ? (c - 32) : c);
}