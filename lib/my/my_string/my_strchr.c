/*
** EPITECH PROJECT, 2021
** my_strchr.c
** File description:
** my_strchr
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