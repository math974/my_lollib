/*
** EPITECH PROJECT, 2021
** my_str_to_word_array_mult.c
** File description:
** transforme string in tab
*/

#include <unistd.h>
#include <stdlib.h>
#include "my_stdio.h"
#include "my_stdbool.h"
#include "my_function.h"

BOOL verif_sep(char c, char *sep)
{
    for (int i = 0; sep[i] != '\0'; i++) {
        if (c == sep[i])
            return (TRUE);
    }
    return (FALSE);
}

int compt_word_m(char const *str, char *sep)
{
    int i = 0;
    int i_word = 0;

    while (str[i] != '\0') {
        if (verif_sep(str[i], sep) == FALSE && str[i] != '\0') {
            i_word = i_word + 1;
            i++;
        }
        while (verif_sep(str[i], sep) == FALSE && str[i] != '\0')
            i++;
        while (verif_sep(str[i], sep) == TRUE && str[i] != '\0')
            i++;
    }
    return (i_word);
}

int compt_letter_m(char const *str, int i, char *sep)
{
    int i_letter = 0;

    while (verif_sep(str[i], sep) == FALSE && str[i] != '\0') {
        i = i + 1;
        i_letter = i_letter + 1;
    }
    return (i_letter);
}

char **my_str_to_word_array_mult(char const *str, char *sep)
{
    int i_word = 0;
    int i_tab = 0;
    char **tab = malloc(sizeof(char *) * (compt_word_m(str, sep) + 1));

    for (int i = 0; str[i] != '\0'; i_word++) {
        for (; verif_sep(str[i], sep) == TRUE && str[i] != '\0'; i++)
            continue;
        if (str[i] != '\0') {
            tab[i_word] = malloc(sizeof(char) * (compt_letter_m(str, i, sep) + 1));
            for (; verif_sep(str[i], sep) == FALSE && str[i] != '\0'; i_tab++, i++)
                tab[i_word][i_tab] = str[i];
            tab[i_word][i_tab] = '\0';
            i_tab = 0;
        }
    }
    tab[i_word - 1] = NULL;
    return (tab);
}