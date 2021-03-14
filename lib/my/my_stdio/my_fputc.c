/*
** EPITECH PROJECT, 2021
** my_fputc.c
** File description:
** my_fputc
*/

#include "my_stdio.h"

ssize_t my_fputc(const int character,  FILE *stream)
{
    return (my_fwrite(stream, &character, 1));
}