/*
** EPITECH PROJECT, 2021
** my_fwrite.c
** File description:
** allows writing to a specified stream
*/

#include "my_stdio.h"

ssize_t my_fwrite(FILE *stream, const void *buf, my_size_t count)
{
    return (write(stream->_fileno, buf, count));
}

