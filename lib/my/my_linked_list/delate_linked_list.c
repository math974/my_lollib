/*
** EPITECH PROJECT, 2020
** delate_linked_list.c
** File description:
** delate linked list
*/

#include "my_linked_list.h"
#include <unistd.h>
#include <stdlib.h>

void delete_linked_list(liste_t *link)
{
    if (link == NULL)  {
        return ;
    }
    while (link->head != NULL) {
        element_t *to_delete = link->head;
        link->head = link->head->next;
        to_delete->next = NULL;
        free(to_delete);
    }
}

