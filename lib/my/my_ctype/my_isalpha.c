/*
** EPITECH PROJECT, 2020
** my_isalpha.c
** File description:
** tests if the character is alphabetic.
*/

int my_isalpha(char c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}