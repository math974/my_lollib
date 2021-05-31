/*
** EPITECH PROJECT, 2021
** my_memcpy.c
** File description:
** my_memcpy
*/

#include "my_string.h"
#include <stddef.h>

void *my_memcpy(void *dest, void *src, size_t size)
{
    char *new_src = (char *) src;
    char *new_dest = (char *) dest;

    while (size--)
        *new_dest++ = *new_src++;
    return (dest);
}