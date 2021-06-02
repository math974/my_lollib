/*
** EPITECH PROJECT, 2021
** my_getc.c
** File description:
** read a character at the current position of the current character stream
*/

#include <stdio.h>
#include <stddef.h>
#include "my_stdio.h"
#include <unistd.h>

int my_getc(FILE *stream)
{
    char buffer[BUFF_SIZE];
    int ret = 0;

    if ((ret = read(stream->_fileno, buffer, BUFF_SIZE)) > 0)
        return (*buffer);
    return (EOF);
}