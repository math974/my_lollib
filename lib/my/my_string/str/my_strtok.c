/*
** EPITECH PROJECT, 2021
** my_strtok.c
** File description:
** extract the syntactic elments one by one (tokens)
*/

#include "my_string.h"

char *my__strtok_r(char *s, const char *delim, char **save_ptr)
{
    char *end_str = "";

    if (*s == '\0') {
        *save_ptr = s;
        return NULL;
    }
    s += my_strspn(s, delim);
    if (*s == '\0') {
        *save_ptr = s;
        return NULL;
    }
    end_str = s + my_strcspn(s, delim);
    if (*end_str == '\0') {
        *save_ptr = s;
        return s;
    }
    *end_str = '\0';
    *save_ptr = end_str + 1;
    return s;
}

char *my_strtock(char *string, const char *delim)
{
    static char *old_str = "";

    if (string == NULL)
        string = old_str;
    return my__strtok_r(string, delim, &old_str);
}