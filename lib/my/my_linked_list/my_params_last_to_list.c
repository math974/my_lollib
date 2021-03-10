/*
** EPITECH PROJECT, 2020
** my_params_last_to_list.c
** File description:
** create a list last my params
*/

#include "my_linked_list.h"
#include <stdlib.h>
#include "my_stdio.h"

element_t *initialise_params(int nbr)
{
    element_t *new = malloc(sizeof(*new));
    new->data = ((void *)(long)nbr);
    new->next = NULL;
    return (new);
}

liste_t *my_params_last_to_list(int ac, char **av)
{
    liste_t *liste = malloc(sizeof(*liste));
    int i = 2;
    element_t *new = NULL;
    element_t *element = NULL;

    liste->head = initialise_params(my_getnbr(av[1]));
    element = liste->head;
    while (i < ac) {
        new = malloc(sizeof(*new));
        new->data = ((void *)(long)my_getnbr(av[i]));
        new->next = NULL;
        while (element->next != NULL)
            element = element->next;
        element->next = new;
        i = i + 1;
    }
    return (liste);
}