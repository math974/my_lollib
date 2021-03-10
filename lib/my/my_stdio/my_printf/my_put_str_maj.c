/*
** EPITECH PROJECT, 2020
** my_put_strS.c
** File description:
** display string and charact inférior 32
*/

#include "my_stdio.h"

void display_zero(int nb)
{
    int i = 0;
    int i_compt = 0;
    int compt_zero = 0;
    i_compt = my_numlen(nb);
    compt_zero = 3 - i_compt;
    while (i < compt_zero) {
        my_putchar('0');
        i = i + 1;
    }
}

void my_put_strS(char const *str)
{
    int i = 0;
    int oct = 0;

    while (str[i] != '\0'){
        if (str[i] <= 32 || str[i] == 127){
            my_putchar('\\');
            oct = my_get_oct(str[i]);
            display_zero(oct);
            my_put_nbr(oct);
        }
        else
            my_putchar(str[i]);
        i = i + 1;
    }
}