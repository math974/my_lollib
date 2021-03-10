/*
** EPITECH PROJECT, 2020
** my_revstr.c
** File description:
** reverse charactère
*/

char *my_revstr(char *str)
{
    int start = 0;
    int end = 0;
    int tmp = 0;

    while (str[start] != '\0') {
        start = start + 1;
    }
    start = start - 1;
    while (end < start) {
        tmp = str[end];
        str[end] = str[start];
        str[start] = tmp;
        end++;
        start--;
    }
    return str;
}

