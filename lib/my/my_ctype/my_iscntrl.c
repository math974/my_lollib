/*
** EPITECH PROJECT, 2020
** my_iscntrl.c
** File description:
** tests whether the argument is a control character.
*/

int my_iscntrl(char c)
{
    if ((c >= 0 && c <= 31) || (c == 127))
        return (1);
    else
        return (0);
}