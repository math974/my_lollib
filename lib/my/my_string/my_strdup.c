/*
** EPITECH PROJECT, 2020
** my_strdup.c
** File description:
** create a copie to str and alocation
*/

#include "my_string.h"
#include "stdlib.h"

char *my_strdup(char const *src)
{
    int i = 0;
    int src2 = my_strlen(src);
    char *str = malloc(sizeof(char) * (src2 + 1));

    while (src[i] != '\0') {
        str[i] = src[i];
        i = i + 1;
    }
    return str;
}