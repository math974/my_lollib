/*
** EPITECH PROJECT, 2020
** input.c
** File description:
** retrieve text
*/

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include "my_stdio.h"
#include <stdlib.h>

char *my_input(void)
{
    char *line = NULL;
    size_t len = 0;
    if (getline(&line, &len, stdin) == -1) {
        my_printf("exit\n");
        exit(0);
    }
    return (line);
}