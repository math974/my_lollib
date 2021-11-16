/*
** EPITECH PROJECT, 2021
** my_bzero.c
** File description:
** erases the data in n bytes of the memory, by writting zeros
*/

#include "my_string.h"

void my_bzero(void *to, size_t count)
{
    my_memset(to, 0, count);
}