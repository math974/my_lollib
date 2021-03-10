/*
** EPITECH PROJECT, 2020
** my_put_hex_maj.c
** File description:
** display convert int en hexa
*/

#include "my_stdio.h"
#include <stdlib.h>

char *hexa_maj(char *base, int nb, int compt_nbr)
{
    int i = 0;
    int result;
    char convert;

    while (i <= compt_nbr) {
        result = nb % 16;
        if (result >= 10 && result <= 15) {
            convert = result + 55;
            base[i] = convert;
        }
        if (result >= 0 && result <= 9) {
            convert = result + 48;
            base[i] = convert;
        }
        if ((nb / 16) == 0)
            break;
        nb = nb / 16;
        i = i + 1;
    }
    return (base);
}

void my_put_hex_maj(int nb)
{
    int compt_nbr = my_numlen(nb);
    char *base = malloc(sizeof(char) * (compt_nbr + 2));

    base = hexa_maj(base, nb, compt_nbr);
    base = my_revstr(base);
    my_putstr(base);
}