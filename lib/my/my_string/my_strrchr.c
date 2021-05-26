/*
** EPITECH PROJECT, 2021
** my_strrchr.c
** File description:
** the function is almost identical to strchr, it returns the last ocurence.
*/

#include <unistd.h>

char *my_strrchr(const char *string, int searchedChar)
{
    char *val = NULL;

    do {
        if (*string == searchedChar)
            val = (char *) string;
    } while (*string++);
    return (val);
}