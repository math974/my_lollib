/*
** EPITECH PROJECT, 2020
** my_strstr.c
** File description:
** strstr
*/

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int j = 0;
    int e = 0;

    while (str[i] != '\0') {
        j = 0;
        e = 0;
        while (str[i] == to_find[j]) {
            e = 1;
            if (to_find[j+1] == '\0')
                return (&str[i - j]);
            i = i + 1;
            j = j + 1;
        }
        if (e != 1)
            i = i + 1;
    }
    return "";
}
