/*
** EPITECH PROJECT, 2020
** my_list_size.c
** File description:
** compt size list
*/

#include "my_linked_list.h"
#include "unistd.h"

int my_list_size(liste_t *link)
{
    int i = 0;

    if (link == NULL) {
        return (0);
    }
    if (link->head == NULL)
        return (0);
    element_t *element = link->head;
    while (element != NULL) {
        element = element->next;
        i = i + 1;
    }
    return (i);
}