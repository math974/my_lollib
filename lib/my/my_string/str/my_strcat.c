/*
** EPITECH PROJECT, 2021
** my_strcat.c
** File description:
** string of concatenated
*/

#include <my_string.h>

char *my_strcat(char *dest, char *src)
{
    return (my_strcpy(dest + my_strlen(dest), src));
}