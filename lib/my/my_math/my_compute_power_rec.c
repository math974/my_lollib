/*
** EPITECH PROJECT, 2020
** my_compute_power_rec.c
** File description:
** recursive power
*/

int my_compute_power_rec(int nb, int p)
{
    int result = 1;

    if (p == 0) {
        return 1;
    }
    if (p < 0) {
        return 0;
    }
    if (0 < p) {
        result = my_compute_power_rec(nb, p - 1);
        result = result * nb;
        return result;
    }
    return result;
}

