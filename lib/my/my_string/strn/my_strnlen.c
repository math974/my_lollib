/*
** EPITECH PROJECT, 2021
** my_strnlen.c
** File description:
** returns the number of bytes in the string pointed to by s
*/

#include <stddef.h>

size_t my_strnlen(const char *str, size_t maxlen)
{
    size_t i = 0;

    for (; i < maxlen; i++)
        if (str[i] == '\0')
            break;
    return (i);
}