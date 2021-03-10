/*
** EPITECH PROJECT, 2020
** my_strcapitalize.c
** File description:
** capitalize finction
*/

int capi_spe(char str, int i);

char *my_strcapitalize(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z' && capi_spe(str[i-1], i) == 1) {
            str[i] = str[i] - 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        i = i + 1;
    }
    return str;
}

int capi_spe(char str, int i)
{
    if (str == ' ' || str == '-' || str == '+' || i == 0)
        return 1;
    else
        return 0;
}
