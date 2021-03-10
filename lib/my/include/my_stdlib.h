/*
** EPITECH PROJECT, 2020
** my_stdlib.h
** File description:
** general purpose utilities.
*/

#ifndef MY_STDLIB_H_
#define MY_STDLIB_H_

typedef unsigned long my_size_t;

typedef struct {
    int quot;
    int rem;
} my_div_t;

typedef struct {
    long quot;
    long rem;
} my_ldiv_t;

typedef struct {
    long long quot;
    long long rem;
} my_lldiv_t;

#define MY_EXIT_FAILURE 84
#define MY_EXIT_SUCCESS 0

int my_abs(int nbr);
long my_labs(long nbr);
long long my_llabs(long long nbr);
my_div_t my_div(int dividend, int divisor);
my_ldiv_t my_ldiv(long dividend, long divisor);
int my_atoi(const char *str);
long my_atol(const char *str);
long long my_atoll(const char *str);
double my_atof(const char *str);
void *my_realloc(void *ptr, my_size_t mem_size);
void *my_calloc(my_size_t count, my_size_t size);

#endif /* !MY_STDLIB_H_ */
