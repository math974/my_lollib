/*
** EPITECH PROJECT, 2021
** my_getchar.c
** File description:
** read a character at the current position of the current character stream
*/

#include <stdio.h>
#include <stddef.h>
#include <stdio.h>
#include "my_stdio.h"

int my_getchar(void)
{
    char buffer[1];
    int ret = 0;

    if ((ret = read(STDIN_FILENO, buffer, 1)) > 0)
        return (*buffer);
    return (EOF);
}