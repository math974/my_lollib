/*
** EPITECH PROJECT, 2020
** my_putchar.c
** File description:
** created fonction write
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
