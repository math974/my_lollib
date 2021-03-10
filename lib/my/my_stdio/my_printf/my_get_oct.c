/*
** EPITECH PROJECT, 2020
** my_get_hex.c
** File description:
** return hex
*/

#include "my_stdio.h"
#include <stdlib.h>

int convert_char_en_int(char *str)
{
    int i = 0;
    int convert = 0;

    while (str[i] != '\0') {
        convert = convert + (str[i] - 48);
        if (str[i + 1] == '\0')
            break;
        convert = convert * 10;
        i = i + 1;
    }
    return (convert);
}

int my_get_oct(unsigned int nb)
{
    int i = 0;
    char convert;
    int result;
    int i_num = my_numlen(nb);
    char *base = malloc(sizeof(char) * (i_num + 2));
    int result_int = 0;

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
    result_int = convert_char_en_int(base);
    return (result_int);
}