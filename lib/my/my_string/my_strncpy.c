/*
** EPITECH PROJECT, 2020
** my_strncpy.c
** File description:
** copie n characters
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    int e = 0;

    while (src[e] != '\0') {
        e = e + 1;
    }
    while (i < n) {
        dest[i] = src[i];
        i = i + 1;
        if (e < n) {
            dest[e] = '\0';
        }
    }
    return dest;
}
