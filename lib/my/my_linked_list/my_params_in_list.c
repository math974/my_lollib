/*
** EPITECH PROJECT, 2020
** my_params_in_list.c
** File description:
** create my list with params
*/

#include "my_linked_list.h"
#include <stdlib.h>

liste_t *my_params_to_list(int ac, char **av)
{
    liste_t *liste = malloc(sizeof(*liste));
    int i = 1;
    element_t *new;

    while (i < ac) {
        new = malloc(sizeof(*new));
        new->data = av[i];
        new->next = liste->head;
        liste->head = new;
        i = i + 1;
    }
    return (liste);
}