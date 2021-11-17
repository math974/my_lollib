/*
** EPITECH PROJECT, 2021
** copy_array.c
** File description:
** copy array
*/

#include <stdlib.h>
#include "my_function.h"
#include "my_string.h"

char **copy_array(char **src_array)
{
    char **new_array = malloc(sizeof(char *) * (len_array(src_array) + 1));

    for (int i = 0; src_array[i] != NULL; i++) {
        new_array[i] = malloc(sizeof(char) * (my_strlen(src_array[i]) + 1));
        for (int i_str = 0; src_array[i][i_str] != '\0'; i_str++)
            new_array[i][i_str] = src_array[i][i_str];
    }
    return (new_array);
}