/*
** EPITECH PROJECT, 2020
** my_isalpha.c
** File description:
** tests if the character is alphabetic.
*/

int my_isalpha(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    else
        return (0);
}