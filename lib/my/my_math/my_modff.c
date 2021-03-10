/*
** EPITECH PROJECT, 2021
** my_modff.c
** File description:
** separate the integer part from the decimal part
*/

float my_modff(float value, float *int_part)
{
    *int_part = (float)(int)value;

    return (value - (int)value);
}