/*
** EPITECH PROJECT, 2020
** my_atol.c
** File description:
** convert a string to a long one
*/

#include "my_ctype.h"
#include "my_limits.h"

int verify_error(const char *str)
{
    if (str[0] == '-' || str[0] == '+' || my_isdigit(str[0]) == 1)
        return (0);
    else
        return (1);
    return (0);
}

long my_atol(const char *str)
{
    long nbr = 0;
    int i = 0;

    if (verify_error(str) == 1)
        return (0);
    if (str[0] == '-' || str[0] == '+')
        i = i + 1;
    while (my_isdigit(str[i]) == 1) {
        if (nbr > LONG_MAX - ((nbr * 10) + str[i] - 48))
            return (-1);
        nbr = (nbr * 10) + str[i] - 48;
        if (my_isdigit(str[i]) == 0)
            break;
        i = i + 1;
    }
    if (str[0] == '-')
        return (nbr * (-1));
    return (nbr);
}