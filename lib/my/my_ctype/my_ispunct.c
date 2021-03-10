/*
** EPITECH PROJECT, 2020
** my_ispunct.c
** File description:
** tests whether the character is a punctuation mark.
*/

int my_ispunct(char c)
{
    char *PONCT = "!,.;?:()[]{}/-";
    int i = 0;

    while (PONCT[i] != '\0') {
        if (c == PONCT[i])
            return (1);
        i = i + 1;
    }
    return (0);
}