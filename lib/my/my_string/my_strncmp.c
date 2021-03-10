/*
** EPITECH PROJECT, 2020
** my_strncmp.c
** File description:
** strcmp function
*/

int my_strncmp(char const *s1, char const *s2, int  n)
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n) {
        i = i + 1;
    }
    if (s1[i] - s2[i] > 0)
        return 1;
    if (s1[i] - s2[i] < 0)
        return -1;
    else
        return 0;
}
