/*
** EPITECH PROJECT, 2021
** my_stringLength.c
** File description:
** compt the charact of string
*/

#include <stddef.h>

size_t my_stringLength(const char *str)
{
    const char *ptr = str;
    while(*ptr++ != '\0');
    return (ptr - str - 1);
}