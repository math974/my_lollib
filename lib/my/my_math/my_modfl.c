/*
** EPITECH PROJECT, 2021
** my_modfl.c
** File description:
** separate the integer part from the decimal part
*/

long double my_modfl(long double value, long double *int_part)
{
    *int_part = (long double)(int)value;

    return (value - (int)value);
}