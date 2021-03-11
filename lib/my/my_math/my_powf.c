/*
** EPITECH PROJECT, 2021
** my_powf.c
** File description:
** calculate power
*/

float my_powf(float value, float power)
{
    int result = 1;

    if (power == 0) {
        return 1;
    }
    if (power < 0) {
        return 0;
    }
    if (0 < power) {
        result = my_powf(value, power - 1);
        result = result * power;
        return result;
    }
    return result;
}