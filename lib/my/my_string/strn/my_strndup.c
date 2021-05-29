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
    char *str = malloc(sizeof(len + 1));

    if (!str)
        return (NULL);
    str[len] = '\0';
    return ((char *)my_memcpy(str, (char *)src, len));
}