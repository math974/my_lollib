/*
** EPITECH PROJECT, 2021
** my_isgraph.c
** File description:
** Checks whether a character has a graphical representation.
*/

int my_isgraph(char c)
{
    return ((c >= '!' && c <= '~'));
}