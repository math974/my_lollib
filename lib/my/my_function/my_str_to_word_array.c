/*
** EPITECH PROJECT, 2020
** my_str_to_word_array.c
** File description:
** my puts words in a array
*/

#include <unistd.h>
#include <stdlib.h>
#include "my_ctype.h"

int compt_word(char const *str)
{
    int i = 0;
    int i_word = 0;

    while (str[i] != '\0') {
        if (my_isalnum(str[i]) == 1) {
            i_word = i_word + 1;
            i = i + 1;
        }
        while (my_isalnum(str[i]) == 1)
            i = i + 1;
        if (my_isalnum(str[i]) == 0)
            i = i + 1;
    }
    return (i_word);
}

int compt_letter(char const *str, int i)
{
    int i_letter = 0;

    while (my_isalnum(str[i]) == 1) {
        i = i + 1;
        i_letter = i_letter + 1;
    }
    return (i_letter);
}

char **my_str_to_word_array(char const *str)
{
    int i = 0;
    int i_tab = 0;
    int i_word = 0;
    char **tab = malloc(sizeof(char *) * (compt_word(str) + 1));

    while (str[i] != '\0') {
        i_tab = 0;
        while (my_isalnum(str[i]) == 0)
            i = i + 1;
        tab[i_word] = malloc(sizeof(char) * (compt_letter(str, i) + 1));
        while (my_isalnum(str[i]) == 1) {
            tab[i_word][i_tab] = str[i];
            i_tab = i_tab + 1;
            i = i + 1;
        }
        tab[i_word][i_tab] = '\0';
        i_word = i_word + 1;
    }
    tab[i_word] = NULL;
    return (tab);
}