/*
** EPITECH PROJECT, 2020
** my_getnbr.c
** File description:
** return number
*/

#include <stdio.h>

int my_getnbr(char const *str)
{
    int i = 0;
    int nbr = 0;
    int moins = 0;

    while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))  {
        if (str[i] == '-')
            moins = moins + 1;
        i = i + 1;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        nbr = (nbr * 10) + str[i] - 48;
        if (str[i + 1] < '0' || str[i + 1] > '9')
            break;
        i = i + 1;
    }
    if ((moins % 2) == 1)
        return (nbr * (-1));
    return (nbr);
}
