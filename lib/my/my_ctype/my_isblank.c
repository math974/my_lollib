/*
** EPITECH PROJECT, 2021
** my_isblank.c
** File description:
** Checks whether a character is blank or not.
*/

int my_isblank(char c)
{
    return (c == '\t' || c == ' ');
}