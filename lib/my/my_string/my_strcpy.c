/*
** EPITECH PROJECT, 2020
** my_strcpy.c
** File description:
** copy the contents of a string into another string
*/

#include <stddef.h>
#include "my_string.h"

char *my_strcpy(char *dest , char *src)
{
    size_t size = my_strlen(src);

    return ((char *)my_memcpy(dest, src, size + 1));
}
