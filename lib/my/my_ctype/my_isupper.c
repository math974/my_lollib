/*
** EPITECH PROJECT, 2020
** my_isupper.c
** File description:
** tests whether the character represents an uppercase letter.
*/

int my_isupper(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    else
        return (0);
}