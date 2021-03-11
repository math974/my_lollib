/*
** EPITECH PROJECT, 2020
** my_compute_power_rec.c
** File description:
** recursive power
*/

double my_pow(double nb, double p)
{
    int result = 1;

    if (p == 0) {
        return 1;
    }
    if (p < 0) {
        return 0;
    }
    if (0 < p) {
        result = my_pow(nb, p - 1);
        result = result * nb;
        return result;
    }
    return result;
}

