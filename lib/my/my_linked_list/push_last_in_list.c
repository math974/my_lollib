/*
** EPITECH PROJECT, 2020
** push_last_in_list.c
** File description:
** push last list
*/

#include "my_linked_list.h"
#include <unistd.h>
#include <stdlib.h>

void push_last_in_list(liste_t *link, void *nbr)
{
    element_t *new = malloc(sizeof(*new));
    element_t *element = link->head;

    new->data = nbr;
    new->next = NULL;
    if (link->head == NULL)
        return;
    while (element->next != NULL)
        element = element->next;
    element->next = new;
}