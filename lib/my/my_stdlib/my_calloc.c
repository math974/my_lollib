/*
** EPITECH PROJECT, 2021
** my_calloc.c
** File description:
** allocates a block of memory by initializing all it's byte to 0
*/

#include "my_stdlib.h"
#include "my_string.h"
#include "unistd.h"
#include "stdlib.h"

void *my_calloc(my_size_t count, my_size_t size)
{
    my_size_t alloc_size = count * size;
    void *new = malloc(alloc_size);

    if (new) {
        my_memset(new, 0, alloc_size);
        return (new);
    }
    return (NULL);
}