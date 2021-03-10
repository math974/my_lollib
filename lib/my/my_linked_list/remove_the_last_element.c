/*
** EPITECH PROJECT, 2020
** remove_the_last_element.c
** File description:
** remove_the_last_element
*/

#include "my_linked_list.h"
#include <stdlib.h>
#include <unistd.h>

void remove_the_last_element(liste_t *list)
{
    element_t *element = list->head;

    while (element->next->next != NULL)
        element = element->next;
    free(element->next);
    element->next = NULL;
}