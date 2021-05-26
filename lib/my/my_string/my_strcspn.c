/*
** EPITECH PROJECT, 2021
** my_strcspn.c
** File description:
** returns the magnifying glass of the largest sub-chain
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

size_t my_strcspn(const char *string, const char *rejectedCharacters)
{
    size_t i_compt = 0;

    do {
        if (check_charact(rejectedCharacters, *string) == TRUE)
            return (i_compt);
        i_compt++;
    } while (*string++);
    return (i_compt);
}