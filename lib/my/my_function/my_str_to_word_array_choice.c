/*
** EPITECH PROJECT, 2021
** my_str_to_word_array_choice;c
** File description:
** choice separator
*/

#include <unistd.h>
#include <stdlib.h>
#include "my_stdio.h"

int compt_word_c(char const *str, char sep)
{
    int i = 0;
    int i_word = 0;

    while (str[i] != '\0') {
        if (str[i] == sep)
            i_word = i_word + 1;
        i++;
    }
    return (i_word + 1);
}

int compt_letter_c(char const *str, int i, char sep)
{
    int i_letter = 0;

    while (str[i] != sep && str[i] != '\0') {
        i = i + 1;
        i_letter = i_letter + 1;
    }
    return (i_letter);
}

char **my_str_to_word_array_choice(char const *str, char sep)
{
    int i_tab = 0;
    int i_word = 0;
    char **tab = malloc(sizeof(char *) * (compt_word_c(str, sep) + 1));

    for (int i = 0; str[i] != '\0'; i_word++) {
        for (; str[i] == sep && str[i] != '\0'; i++)
            continue;
        tab[i_word] = malloc(sizeof(char) * (compt_letter_c(str, i, sep) + 1));
        for (; str[i] != sep && str[i] != '\0'; i_tab++, i++)
            tab[i_word][i_tab] = str[i];
        tab[i_word][i_tab] = '\0';
        i_tab = 0;
    }
    tab[i_word] = NULL;
    return (tab);
}