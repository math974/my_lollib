/*
** EPITECH PROJECT, 2021
** my_realloc.c
** File description:
** reallocates a memory block
*/

#include "my_stdlib.h"
#include <unistd.h>
#include "stdlib.h"
#include "my_string.h"
#include "malloc.h"

void *my_realloc(void *ptr, my_size_t mem_size)
{
    void *new;

    if (!ptr) {
        new = malloc(mem_size);
        if (!new)
            return (NULL);
    } else {
        if (sizeof(ptr) < mem_size) {
            new = malloc(mem_size);
            if (!new)
                return (NULL);
            my_memcpy(new, ptr, sizeof(ptr));
            free(ptr);
        } else
            new = ptr;
    }
    return (new);
}
