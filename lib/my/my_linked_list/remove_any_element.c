/*
** EPITECH PROJECT, 2020
** remove_any_element.c
** File description:
** remove any element in the linked list
*/

#include "my_linked_list.h"
#include <stdlib.h>
#include <unistd.h>

void remove_any_element(liste_t *list, int pos)
{
    element_t *tmp = list->head;
    element_t *delate;
    int i = 0;

    if (pos == 0)
        remove_the_first_element(list);
    while (i < (pos - 1)) {
        tmp = tmp->next;
        i = i + 1;
    }
    delate = tmp->next;
    tmp->next = delate->next;
    free(delate);
}