/*
** EPITECH PROJECT, 2020
** my_puts
** File description:
** write a string to stdout and add a newline
*/

#include "my_stdio.h"

int my_puts(const char *string)
{
    my_putstr(string);
    my_putchar('\n');
    return (0);
}