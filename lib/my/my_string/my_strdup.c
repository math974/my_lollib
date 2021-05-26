/*
** EPITECH PROJECT, 2020
** my_strdup.c
** File description:
** create a copie to str and alocation
*/

#include "my_string.h"
#include "stdlib.h"

char *my_strdup(const char *src)
{
    size_t size = my_strlen(src);
    char *str = malloc(sizeof(char) * (size + 1));

    if (str == NULL)
        return (NULL);
    return ((char *)my_memcpy(str, (char *)src, size));
}