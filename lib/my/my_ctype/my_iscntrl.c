/*
** EPITECH PROJECT, 2020
** my_iscntrl.c
** File description:
** tests whether the argument is a control character.
*/

int my_iscntrl(char c)
{
    return ((c >= 0 && c <= 31) || (c == 127));
}