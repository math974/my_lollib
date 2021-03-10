/*
** EPITECH PROJECT, 2020
** my_stdlib.h
** File description:
** general purpose utilities.
*/

#ifndef MY_STDLIB_H_
#define MY_STDLIB_H_

////////////////////////////////////////////////////////////
//
//         _      _ _ _ _
//     ___| |_ __| | (_) |__
//    / __| __/ _` | | | '_ \.
//    \__ \ || (_| | | | |_) |
//    |___/\__\__,_|_|_|_.__/
//
//    The library <my_stdlib.h> (for MY standard library) offers functions to answer different problems.
//    First of all, this library will allow you to manage memory dynamically,
//    by allocating or freeing memory in the heap.
//    It will also allow you to interact with the operating system on which the program runs.
//    This library also offers a number of other utility functions for conversions between data types,
//    algorithms (sorting, dichotomous search, pseudo-random number generation, ...)
//    and some other possibilities.
//
//
////////////////////////////////////////////////////////////

#define MY_EXIT_FAILURE 84
#define MY_EXIT_SUCCESS 0

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


////////////////////////////////////////////////////////////
/// \brief calculate the absolute value of a number
///
/// This function allows the calculation of the absolute value of an integer.
/// A little reminder: the absolute value of a positive integer
/// is equal to the integer itself.
/// On the other hand, the absolute value of a negative integer
/// is equal to the opposite of this value.
///
/// \param nbr the value for which the absolute value must be calculated.
///
/// \return returns the absolute value of the integer proposed in parameter.
///
////////////////////////////////////////////////////////////
int my_abs(int nbr);


////////////////////////////////////////////////////////////
/// \brief calculate the absolute value of a long number
///
/// \param nbr the value for which the absolute value must be calculated.
///
/// \return returns the absolute value of the long integer proposed in parameter.
///
////////////////////////////////////////////////////////////
long my_labs(long nbr);

////////////////////////////////////////////////////////////
/// \brief calculate the absolute value of a very long integer (type long long)
///
/// \param nbr the value for which the absolute value must be calculated.
///
/// \return returns the absolute value of the very long intege proposed in parameter.
///
////////////////////////////////////////////////////////////
long long my_llabs(long long nbr);


////////////////////////////////////////////////////////////
/// \brief The entire division
///
/// \param nbr the value for which the absolute value must be calculated.
///
/// \return returns the absolute value of the very long intege proposed in parameter.
///
////////////////////////////////////////////////////////////
my_div_t my_div(int dividend, int divisor);
my_ldiv_t my_ldiv(long dividend, long divisor);
int my_atoi(const char *str);
long my_atol(const char *str);
long long my_atoll(const char *str);
double my_atof(const char *str);
void *my_realloc(void *ptr, my_size_t mem_size);
void *my_calloc(my_size_t count, my_size_t size);

#endif /* !MY_STDLIB_H_ */
