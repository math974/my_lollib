/*
** EPITECH PROJECT, 2020
** my_linked_list.h
** File description:
** function list
*/

#ifndef MY_LINKED_LIST_H_
#define MY_LINKED_LIST_H_

////////////////////////////////////////////////////////////
//
//                        _ _       _            _     _ _     _
//    _ __ ___  _   _    | (_)_ __ | | _____  __| |   | (_)___| |_
//   | '_ ` _ \| | | |   | | | '_ \| |/ / _ \/ _` |   | | / __| __|
//   | | | | | | |_| |   | | | | | |   <  __/ (_| |   | | \__ \ |_
//   |_| |_| |_|\__, |___|_|_|_| |_|_|\_\___|\__,_|___|_|_|___/\__|
//              |___/_____|                      |_____|
//
//   This library gives access to the famous data structures: the linked lists.
//
////////////////////////////////////////////////////////////

typedef struct element_s{
    void *data;
    struct element_s *next;
}element_t;

typedef struct liste_s {
    struct element_s *head;
}liste_t;

liste_t *initialization();
void push_first_in_list(liste_t *link, void *nvnunber);
void remove_the_first_element(liste_t *link);
void remove_the_last_element(liste_t *list);
void remove_any_element(liste_t *list, int pos);
void display_link(liste_t *link);
void display_link_char(liste_t *link);
int my_list_size(liste_t *link);
void delete_linked_list(liste_t *link);
void push_last_in_list(liste_t *link, void *nbr);
void push_at_insert_in_list(liste_t *list, void *nbr, int pos);
liste_t *my_params_to_list(int ac, char **av);
liste_t *my_params_last_to_list(int ac, char **av);

#endif /* !MY_LINKED_LIST_H_ */
