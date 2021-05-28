/*
** EPITECH PROJECT, 2021
** my_index.h
** File description:
** returns a pointer to the first occurrence of the character in the string
*/

#include <stddef.h>

char *my_index(const char *str, int c)
{
    do {
        if (*str == c)
            return ((char *)str);
    } while(*str++);
    return (NULL);
}