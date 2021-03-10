/*
** EPITECH PROJECT, 2020
** my_put_bin.c
** File description:
** convert integer en binary
*/

#include "my_stdio.h"
#include <stdlib.h>
#include <stdio.h>

char *binary(char *base, unsigned int nb, unsigned int compt_nbr)
{
    unsigned int i = 0;
    unsigned int result = 0;
    char convert;

    while (i <= compt_nbr) {
        result = nb % 2;
        convert = result + 48;
        base[i] = convert;
        if ((nb / 2) == 0)
            break;
        nb = nb / 2;
        i = i + 1;
    }
    return (base);
}

int bin_compt(unsigned int nb)
{
    int i = 0;

    while (nb != 0) {
        nb /= 2;
        i = i + 1;
    }
    return (i);
}

void my_put_bin(unsigned int nb)
{
    int compt_nbr = bin_compt(nb);
    char *base = malloc(sizeof(char) * (compt_nbr) + 2);

    base = binary(base, nb, compt_nbr);
    base = my_revstr(base);
    my_putstr(base);
}