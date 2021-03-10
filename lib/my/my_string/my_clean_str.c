/*
** EPITECH PROJECT, 2021
** my_clean_str.c
** File description:
** clean space and \t to beginning and end
*/

#include "my_stdlib.h"
#include "my_stdio.h"
#include "stdlib.h"
#include "my_stdbool.h"

int compt_end_space(char *str, int i)
{
    int i_compt = 0;

    while (str[i] != '\0') {
        if (str[i] == '\0')
            break;
        if (str[i] != ' ' && str[i] != '\t')
            return (-1);
        if (str[i] == ' ' || str[i] == '\t')
            i_compt++;
        i = i + 1;
    }
    return (i_compt);
}

int compt_not_space(char *str)
{
    int i = 0;
    int i_compt = 0;
    int recup_compt = 0;

    while (str[i] == ' ' || str[i] == '\t')
        i++;
    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\t') {
            recup_compt = compt_end_space(str, i);
            if (recup_compt != -1)
                break;
        }
        i_compt++;
        i++;
    }
    return (i_compt);
}

BOOL verify_end_space(char *str, int i)
{
    while (str[i] != '\0') {
        if (str[i] == '\0')
            break;
        if (str[i] != ' ' && str[i] != '\t')
            return (FALSE);
        i++;
    }
    return (TRUE);
}

char *my_clean_str(char *str)
{
    int i = 0;
    int i_new = 0;
    char *new_str = malloc(sizeof(char) * (compt_not_space(str) + 1));

    while (str[i] == ' ' || str[i] == '\t')
        i++;
    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\t') {
            if (verify_end_space(str, i) == TRUE)
                break;
            else
                new_str[i_new++] = str[i];
        }
        else
            new_str[i_new++] = str[i];
        i++;
    }
    new_str[i_new] = '\0';
    free(str);
    return (new_str);
}