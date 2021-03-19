/*
** EPITECH PROJECT, 2021
** my_memcmp.c
** File description:
** my_memcmp
*/

#include "my_stdlib.h"

int my_memcmp(const void* ptr1, const void *ptr2, my_size_t size)
{
    const unsigned char *str1 = (const unsigned char *)ptr1;
    const unsigned char *str2 = (const unsigned char *)ptr2;

    while (size--) {
        if (*str1++ != *str2++)
            return (str1[-1] - str2[-1]);
    }
    return (0);
}