/*
** EPITECH PROJECT, 2021
** my_strpbrk.c
** File description:
** search for the first occurrence of a character in a list of characters
*/

#include "my_string.h"

char *my_strpbrk(char *string, char *searchedCharacters)
{
    string += my_strcspn(string, searchedCharacters);
    return (*string ? string : NULL);
}