/*
** EPITECH PROJECT, 2020
** my_isneg.c
** File description:
** number positif and negatif
*/

void my_putchar(char c);

int my_isneg(int n)
{
    if (n < 0) {
        my_putchar('N');
        return (1);
    }
    else {
        my_putchar('P');
        return (0);
    }
}