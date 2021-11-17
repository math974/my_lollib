/*
** EPITECH PROJECT, 2021
** my_strndup.c
** File description:
** copies at most n bytes.
*/

#include "my_string.h"
#include <stddef.h>
#include <stdlib.h>

char *my_strndup(const char *src, size_t n)
{
    size_t len = my_strnlen(src, n);
    char *str = malloc(sizeof(char) * (len + 1));

    if (!str)
        return (NULL);
    return ((char *)my_memcpy(str, (char *)src, len));
}