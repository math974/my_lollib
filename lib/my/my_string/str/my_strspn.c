/*
** EPITECH PROJECT, 2021
** my_strspn.c
** File description:
** returns the length of the largest sub-string
*/

#include <stddef.h>
#include "my_stdbool.h"

static BOOL check_charact(const char *string, int c)
{
    do {
        if (*string == c)
            return (TRUE);
    } while (*string++);
    return (FALSE);
}

size_t my_strspn(const char *string, const char *acceptedCharacters)
{
    size_t i_compt = 0;

    do {
        if (check_charact(acceptedCharacters, *string) == FALSE)
            return (i_compt);
        i_compt++;
    } while (*string++);
    return (i_compt);
}