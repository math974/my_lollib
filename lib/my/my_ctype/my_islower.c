/*
** EPITECH PROJECT, 2020
** my_islower.c
** File description:
** tests whether the character represents a lowercase letter.
*/

int my_islower(char c)
{
    if (c >= 'a' && c <= 'z')
        return (1);
    else
        return (0);
}