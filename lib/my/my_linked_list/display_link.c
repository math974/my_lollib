/*
** EPITECH PROJECT, 2020
** display_link.c
** File description:
** display linked list
*/

#include "my_linked_list.h"
#include "my_stdio.h"
#include <unistd.h>
#include <stdlib.h>

void display_link(liste_t *link)
{
    if (link == NULL) {
        return ;
    }
    element_t *element = link->head;

    while (element != NULL) {
        int nb = (long long)element->data;
        my_printf("%d > ", nb);
        element = element->next;
    }
    my_printf("NULL\n");
}

void display_link_char(liste_t *link)
{
    if (link == NULL) {
        return ;
    }
    element_t *element = link->head;

    while (element != NULL) {
        char *nb = (char *)element->data;
        my_printf("%s > ", nb);
        element = element->next;
    }
    my_printf("NULL\n");
}