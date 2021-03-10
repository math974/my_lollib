/*
** EPITECH PROJECT, 2020
** remove_the_first_element.c
** File description:
** remove_the_first_element
*/

#include "my_linked_list.h"
#include <unistd.h>
#include <stdlib.h>

void remove_the_first_element(liste_t *link)
{
    if (link == NULL) {
        return ;
    }

    if (link->head != NULL) {
        element_t *to_delete = link->head;
        link->head = link->head->next;
        free(to_delete);
    }
}
