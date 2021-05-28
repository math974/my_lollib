/*
** EPITECH PROJECT, 2020
** my_str_isprintable.c
** File description:
** printable characters
*/

int my_str_isprintable(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= ' ' && str[i] <= '~')
            i = i + 1;
        else
            return 0;
    }
    return 1;
}
