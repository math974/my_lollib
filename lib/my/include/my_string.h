/*
** EPITECH PROJECT, 2020
** my_string.h
** File description:
** handling of character strings
*/

#include <stddef.h>
#include <my_stdlib.h>

#ifndef MY_STRING_H_
#define MY_STRING_H_

typedef unsigned long my_size_t;

void my_bzero(void *to, size_t count);
char *my_revstr(char *str);
char *my_strcapitalize(char *str);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy (char *dest , char *src);
int my_strlen(char const *str);
int my_strncmp(char const *s1, char const *s2, int  n);
char *my_strncpy(char *dest, const char *src, size_t n);
char *my_strstr(char *str, char const *to_find);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
char *my_strlowcase(char *str);
char *my_strupcase(char *str);
char *my_strdup(char const *src);
void *my_memset(void *dest, int value, size_t count);
void *my_memcpy(void *dest, void *src, size_t size);
int my_memcmp(const void* ptr1, const void *ptr2, size_t size);
char *my_clean_str(char *str);
char *my_strdeleate_chara(char *src, char charact);
char *my_strcat(char *dest, const char *src);
char *my_strchr(const char* str, int searchedChar);
char *my_strrchr(const char *string, int searchedChar);
size_t my_strcspn(const char *string, const char *rejectedCharacters);
size_t my_strspn(const char *string, const char *acceptedCharacters);
char *my_strpbrk(char *string, char *searchedCharacters);
char *my_strtok(char *string, const char *delim);
void *my_memchr(const void *memory_block, int search_char, size_t size);
size_t my_strnlen(const char *str, size_t maxlen);
char *my_strndup(const char *src, size_t n);

#endif /* !MY_STRING_H_ */
