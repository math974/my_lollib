/*
** EPITECH PROJECT, 2021
** my_modf.c
** File description:
** separate the integer part from the decimal part
*/

double my_modf(double value, double *int_part)
{
    *int_part = (double)(int)value;

    return (value - (int)value);
}
