/*
** EPITECH PROJECT, 2020
** my_strlowcase.c
** File description:
** lowcase function
*/

char *my_strlowcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        i = i + 1;
    }
    return str;
}

