/*
** EPITECH PROJECT, 2020
** my_isprint.c
** File description:
** tests if the character is printable.
*/

int my_isprint(char c)
{
    if (c >= '!' && c <= '~')
        return (1);
    else
    return (0);
}