/*
** EPITECH PROJECT, 2021
** my_split.c
** File description:
** split the elements of a string with a separator into an array
*/

#include <stdlib.h>
#include "my_string.h"

int nbr_word(char *src, char *sep)
{
    char *src_copy = my_strdup(src);
    char *token = my_strtok(src_copy, sep);
    int compt = 1;

    while ((token = my_strtok(NULL, sep)))
        compt++;
    free(src_copy);
    return (compt);
}

char **my_split(char *src, char *sep)
{
    char *src_copy = my_strdup(src);
    char **tab = malloc(sizeof(char *) * (nbr_word(src, sep) + 1));
    char *token = my_strtok(src_copy, sep);
    int i_tab = 0;

    while (token != NULL) {
        tab[i_tab++] = my_strdup(token);
        token = my_strtok(NULL, sep);
    }
    tab[i_tab] = NULL;
    free(src_copy);
    return (tab);
}