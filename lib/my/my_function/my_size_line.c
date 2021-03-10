/*
** EPITECH PROJECT, 2021
** my_size_line.c
** File description:
** compt charact in line
*/

int my_size_line(char *str, int i)
{
    int size_line = 0;

    while (str[i] != '\0') {
        if (str[i] != '\n')
            size_line++;
        if (str[i] == '\n')
            break;
        i = i + 1;
    }
    return (size_line);
}