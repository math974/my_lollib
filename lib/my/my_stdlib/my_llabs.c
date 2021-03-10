/*
** EPITECH PROJECT, 2021
** my_llabs.c
** File description:
** return the absolute value of long long integer
*/

long long my_llabs(long long nbr)
{
    if (nbr < 0) {
        nbr = nbr * -1;
        return (nbr);
    } else
        return (nbr);
}