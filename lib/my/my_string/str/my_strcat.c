/*
** EPITECH PROJECT, 2021
** my_strcat.c
** File description:
** string of concatenated
*/

#include "my_string.h"

char *my_strcat(char *dest, const char *src)
{
    my_strcpy(dest + my_strlen(dest), (char *)src);
    return (dest);
}