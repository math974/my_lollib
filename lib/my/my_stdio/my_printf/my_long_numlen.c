/*
** EPITECH PROJECT, 2020
** my_long_numlen.c
** File description:
** compt number long int
*/

int my_long_numlen(long int nb)
{
    int i = 1;
    long int div = 1;

    while ((nb / div) >= 10) {
        div *= 10;
        i = i + 1;
    }
    return (i);
}