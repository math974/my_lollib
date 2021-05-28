/*
** EPITECH PROJECT, 2021
** my_rindex.h
** File description:
** returns a pointer to the last occurrence of the character c in the string
*/

#include <stddef.h>

char *my_rindex(const char *str, int c)
{
    char *val = NULL;

    do {
        if (*str == c)
            val = (char *)str;
    } while (*str++);
    return (val);
}