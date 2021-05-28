/*
** EPITECH PROJECT, 2020
** my_strstr.c
** File description:
** the function searches for the first occurrence of a substring in the main.
*/

#include <stddef.h>
#include "my_string.h"

char *my_strstr(char *str, char const *to_find)
{
    const char *p = str;
    const size_t size = my_strlen(to_find);

    for (; (p = my_strchr(p, *to_find)) != 0; p++) {
        if (my_strncmp(p, to_find, size) == 0)
                return ((char *)p);
    }
    return (NULL);
}