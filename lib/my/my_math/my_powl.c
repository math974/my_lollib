/*
** EPITECH PROJECT, 2021
** my_powl.c
** File description:
** calculate power
*/

long double my_powl(long double value, long double power)
{
    int result = 1;

    if (power == 0) {
        return 1;
    }
    if (power < 0) {
        return 0;
    }
    if (0 < power) {
        result = my_powl(value, power - 1);
        result = result * power;
        return result;
    }
    return result;
}