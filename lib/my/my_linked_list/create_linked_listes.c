/*
** EPITECH PROJECT, 2020
** create_linked_listes.c
** File description:
** create a linked liste
*/

#include "my_linked_list.h"
#include <unistd.h>
#include <stdlib.h>

liste_t *initialization(void)
{
    liste_t *link = malloc(sizeof(*link));
    element_t *element = malloc(sizeof(*element));

    element->data = 0;
    element->next = NULL;
    link->head = element;
    return (link);
}