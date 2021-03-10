/*
** EPITECH PROJECT, 2020
** push_first_in_list.c
** File description:
** create a node in first
*/

#include "my_linked_list.h"
#include <unistd.h>
#include <stdlib.h>

void push_first_in_list(liste_t *link, void *nvnunber)
{
    element_t *new = malloc(sizeof(*new));

    if (link == NULL && new == NULL) {
        return ;
    }
    if (link->head == NULL) {
        new->data = nvnunber;
        new->next = NULL;
        link->head = new;
    }
    else {
        new->data = nvnunber;
        new->next = link->head;
        link->head = new;
    }
}