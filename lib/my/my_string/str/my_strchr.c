/*
** EPITECH PROJECT, 2021
** my_strchr.c
** File description:
** searches for the first occurrence of the character passed as the second par
*/

#include <stddef.h>

char *my_strchr(const char* str, int searchedChar)
{
    do {
        if (*str == searchedChar)
            return ((char*)str);
    } while (*str++);
    return (NULL);
}