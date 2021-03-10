/*
** EPITECH PROJECT, 2020
** my_put_oct.c
** File description:
** display octal a number
*/

#include "my_stdio.h"
#include <stdlib.h>

void my_put_oct(unsigned int nb)
{
    int i = 0;
    char convert;
    int result;
    int i_num = my_numlen(nb);
    char *base = malloc(sizeof(char) * (i_num + 2));

    while (i <= i_num) {
        result = nb % 8;
        convert = result + 48;
        base[i] = convert;
        if ((nb / 8) == 0)
            break;
        nb = nb / 8;
        i = i + 1;
    }
    base = my_revstr(base);
    my_putstr(base);
}