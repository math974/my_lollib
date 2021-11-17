/*
** EPITECH PROJECT, 2021
** my_strdeleate_chara.c
** File description:
** deleate a charact in string
*/

#include <stdlib.h>
#include "my_stdio.h"

int not_deleate(char *str, char charact)
{
    int i = 0;
    int i_compt = 0;

    for (; str[i] != '\0'; i++) {
        if (str[i] != charact)
            i_compt++;
    }
    return (i_compt);
}

char *my_strdeleate_chara(char *src, char charact)
{
    int i_new = 0;
    char *new_str = malloc(sizeof(char) * (not_deleate(src, charact) + 1));

    for (int i = 0; src[i] != '\0'; i++) {
        if (src[i] != charact) {
            new_str[i_new] = src[i];
            i_new++;
        }
    }
    new_str[i_new] = '\0';
    free(src);
    return (new_str);
}