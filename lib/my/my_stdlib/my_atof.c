/*
** EPITECH PROJECT, 2020
** my_atof.c
** File description:
** allows you to transform a character string into a double
*/

#include "my_ctype.h"
#include "my_limits.h"
#include "my_stdbool.h"
#include "my_stdio.h"

int récup_int_to_str(const char *str, int *i, BOOL *point, BOOL *charact)
{
    int nbr = 0;

    if (str[0] == '-' || str[0] == '+')
        *i = *i + 1;
    while (str[*i] != '\0') {
        if (str[*i] == '.') {
            *point = TRUE;
            break;
        }
        if (my_isdigit(str[*i]) == 0) {
            *charact = TRUE;
            break;
        }
        nbr = (nbr * 10) + str[*i] - 48;
        *i = *i + 1;
    }
    if ((*charact == TRUE || *point == FALSE) && str[0] == '-')
        return (nbr * (-1));
    return (nbr);
}

int récup_décimal(const char *str, int *i, BOOL *charact)
{
    *charact = FALSE;
    int nbr = 0;

    *i = *i + 1;
    while (str[*i] != '\0') {
        if (my_isdigit(str[*i]) == 0) {
            *charact = TRUE;
            return (nbr);
        }
        nbr = (nbr * 10) + str[*i] - 48;
        *i = *i + 1;
    }
    return (nbr);
}

double conv_int_double(int nbr)
{
    int compt = my_numlen(nbr);
    int i = 0;
    double résult = nbr;

    while (i < compt) {
        résult = résult * 0.1;
        i = i + 1;
    }
    return (résult);
}

int verify_error(const char *str)
{
    if (str[0] == '-' || str[0] == '+' || my_isdigit(str[0]) == 1)
        return (0);
    else
        return (1);
    return (0);
}

double my_atof(const char *str)
{
    double nbr = 0;
    int i = 0;
    BOOL point = FALSE;
    BOOL charact = FALSE;
    int nbr2 = 0;

    if (verify_error(str) == 1)
        return (0.0);
    nbr2 = récup_int_to_str(str, &i, &point, &charact);
    if (charact == TRUE)
        return ((double) nbr2);
    if (point == FALSE)
        return ((double) nbr2);
    if (point == TRUE)
        nbr = nbr2 + conv_int_double(récup_décimal(str, &i, &charact));
    if (str[0] == '-')
        return (nbr * (-1));
    return (nbr);
}
