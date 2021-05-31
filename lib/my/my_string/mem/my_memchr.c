/*
** EPITECH PROJECT, 2021
** my_memchr.c
** File description:
** search for a presence in a memory area
*/

#include "my_stdlib.h"
#include <stddef.h>

void *my_memchr(const void *memory_block, int search_char, size_t size)
{
    const unsigned char *src = (const unsigned char *)memory_block;

    while (size--) {
        if (*src == search_char)
            return ((void *)src);
        src++;
    }
    return (NULL);
}