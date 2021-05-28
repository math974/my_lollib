/*
** EPITECH PROJECT, 2020
** my_memset.c
** File description:
** This function is used to fill a memory area
*/

#include <stddef.h>

void *my_memset(void *dest, int value, size_t count)
{
    unsigned char *ptr = dest;

    while (count-- > 0)
        *ptr++ = value;
    return dest;
}