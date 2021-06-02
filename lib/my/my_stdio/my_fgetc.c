/*
** EPITECH PROJECT, 2021
** my_fgetc.c
** File description:
** read a character at the current position of the current character stream
*/

#include <stdio.h>
#include "my_stdio.h"

int my_fgetc(FILE *stream)
{
    return (my_getc(stream));
}