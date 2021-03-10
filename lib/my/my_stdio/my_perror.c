/*
** EPITECH PROJECT, 2020
** my_perror.c
** File description:
** print an error message on standard output
*/

#include "my_string.h"
#include "unistd.h"

void my_perror(const char *prefix)
{
    int nbr_charact = my_strlen(prefix);
    write(2, prefix, nbr_charact + 1);
}
