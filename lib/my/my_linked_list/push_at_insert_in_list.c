/*
** EPITECH PROJECT, 2020
** push_at_insert_in_list.c
** File description:
** place a new element in the middle to list
*/

#include "my_linked_list.h"
#include <stdlib.h>

void push_at_insert_in_list(liste_t *list, void *nbr, int pos)
{
    element_t *new = malloc(sizeof(*new));
    element_t *element = list->head;
    int i = 0;

    while (i < pos) {
        element = element->next;
        i = i + 1;
    }
    new->data = nbr;
    new->next = element->next;
    element->next = new;
}
