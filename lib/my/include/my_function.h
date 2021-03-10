/*
** EPITECH PROJECT, 2020
** my_function
** File description:
** my function
*/

#include <sys/types.h>

#ifndef MY_FUNCTION_H_
#define MY_FUNCTION_H_

////////////////////////////////////////////////////////////
//
//                         __                  _   _
//    _ __ ___  _   _     / _|_   _ _ __   ___| |_(_) ___  _ __
//   | '_ ` _ \| | | |   | |_| | | | '_ \ / __| __| |/ _ \| '_ \.
//   | | | | | | |_| |   |  _| |_| | | | | (__| |_| | (_) | | | |
//   |_| |_| |_|\__, |___|_|  \__,_|_| |_|\___|\__|_|\___/|_| |_|
//              |___/_____|
//
//   This library covers a range of useful functions for surviving in tek.
//
////////////////////////////////////////////////////////////

void my_swap(int *a, int *b);
char **my_str_to_word_array(char const *str);
char **my_str_to_word_array_choice(char const *str, char sep);
ssize_t my_size(char *filename);
char *my_input(void);
void my_display_array(char **array);
void my_display_array_int(char **array, int size);
int len_array(char **array);
int my_size_line(char *str, int i);
void free_array(char **array);
char **copy_array(char **src_array);
int my_indexof(char *src, char *corespond);

#endif /* !MY_FUNCTION_H_ */
