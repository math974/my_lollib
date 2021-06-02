/*
** EPITECH PROJECT, 2021
** my_getchar.c
** File description:
** my_getchar
*/

#include <stdio.h>
#include <stddef.h>
#include <stdio.h>
#include "my_stdio.h"

int my_getchar(void)
{
    char buffer[BUFF_SIZE];
    int ret = 0;

    if ((ret = read(STDIN_FILENO, buffer, BUFF_SIZE)) > 0)
        return (*buffer);
    return (EOF);
}