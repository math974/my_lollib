/*
** EPITECH PROJECT, 2020
** size.c
** File description:
** size file
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

ssize_t my_size(char *filename)
{
    FILE *fp;
    char *line = NULL;
    size_t len = 0;
    ssize_t read = 0;
    ssize_t résult = 0;

    fp = fopen(filename, "r");
    if (fp == NULL)
        return (-1);
    else {
        while ((read = getline(&line, &len, fp)) != -1)
            résult = résult + read;
    }
    if (line)
        free(line);
    fclose(fp);
    return (résult);
}