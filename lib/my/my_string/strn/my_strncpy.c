/*
** EPITECH PROJECT, 2020
** my_strncpy.c
** File description:
** copie n characters
*/

#include <stddef.h>
#include "my_string.h"

char *my_strncpy(char *dest, const char *src, size_t n)
{
    size_t size = my_strnlen(src, n);

    if (size != n)
        dest[size] = '\0';
    return (my_memcpy(dest, (char *)src, size));
}
