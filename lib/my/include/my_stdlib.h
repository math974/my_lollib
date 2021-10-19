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
//                             _      _ _ _ _
//     _ __ ___  _   _     ___| |_ __| | (_) |__
//    | '_ ` _ \| | | |   / __| __/ _` | | | '_ \.
//    | | | | | | |_| |   \__ \ || (_| | | | |_) |
//    |_| |_| |_|\__, |___|___/\__\__,_|_|_|_.__/
//               |___/_____|
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

#define ABS(x)  (x > 0) ? (x) : (-x)

////////////////////////////////////////////////////////////
/// \brief If all goes well, the function returns a pointer to the newly allocated area.
/// It is notably used by the div function.
///
/// \param quot the quotient
///
/// \param rem the remainder
///
////////////////////////////////////////////////////////////
typedef struct {
    int quot;
    int rem;
} my_div_t;


////////////////////////////////////////////////////////////
/// \brief This structure is used to store the quotient and
/// remainder of an integer division in long fields.
/// It is notably used by the ldiv function.
///
/// \param quot the quotient
///
/// \param rem the remainder
///
////////////////////////////////////////////////////////////
typedef struct {
    long quot;
    long rem;
} my_ldiv_t;


////////////////////////////////////////////////////////////
/// \brief This structure allows to store the quotient and
/// the remainder of an integer division, in fields of type long long.
/// It is notably used by the lldiv function.
///
/// \param quot the quotient
///
/// \param rem the remainder
///
////////////////////////////////////////////////////////////
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
/// This function performs an entire division of a dividend by a divisor
/// and returns the quotient and the rest of the division to you.
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
/// This function performs an entire division of a dividend by a divisor
/// and returns the quotient and the rest of the division to you.
///
/// \param dividend represents the dividend (or the numerator, if you prefer).
///
/// \param divisor represents the divisor (or the denominator, if you prefer).
///
/// \return The function returns a structure of type my_div_t
///
////////////////////////////////////////////////////////////
my_div_t my_div(int dividend, int divisor);


////////////////////////////////////////////////////////////
/// \brief The entire division
///
/// \param dividend represents the dividend (or the numerator, if you prefer).
///
/// \param divisor represents the divisor (or the denominator, if you prefer).
///
/// \return The function returns a structure of type my_ldiv_t
///
////////////////////////////////////////////////////////////
my_ldiv_t my_ldiv(long dividend, long divisor);


////////////////////////////////////////////////////////////
/// \brief string of characters in numerical value
///
/// This function allows to transform a string of characters,
/// representing an integer value, into a numerical value of type int.
///
/// \param str this parameter contains the string of characters to be converted into a data of type int.
///
/// \return If the string to be converted does not contain an integer numeric data, the value 0 will be returned.
/// Otherwise, a value of type int equivalent to the string passed as parameter will be returned.
///
////////////////////////////////////////////////////////////
int my_atoi(const char *str);


////////////////////////////////////////////////////////////
/// \brief string of characters in long integer value
///
/// This function transforms a string, representing a long integer value,
/// into a long numeric value.
///
/// \param str This parameter contains the string to be converted to a long data type.
///
/// \return If the string to be converted does not contain an integer data,
/// the value 0 will be returned. Otherwise, a value of type long equivalent
/// to the string passed in parameter will be returned.
///
////////////////////////////////////////////////////////////
long my_atol(const char *str);


////////////////////////////////////////////////////////////
/// \brief string of characters in very long integer value
///
/// This function transforms a character string, containing the textual
/// representation of an integer, into a very long integer
/// (type long long or long long int: these are synonyms).
///
/// \param str This parameter contains the string to be converted into a long long (or long long int) data type.
///
/// \return If the string to be converted does not contain an integer data, the value 0 will be returned.
/// Otherwise, a value of type long long (or long long int)
/// equivalent to the string passed in parameter will be returned.
///
////////////////////////////////////////////////////////////
long long my_atoll(const char *str);


////////////////////////////////////////////////////////////
/// \brief This function transforms a character string, representing a floating value,
/// into a numerical value of type double
///
/// \param str This parameter contains the string to be converted to a double data type.
///
/// \return If the string to be converted does not contain a floating-point numeric data,
/// the value 0 will be returned. Otherwise, a value of type double equivalent to the string
/// passed in parameter will be returned.
///
////////////////////////////////////////////////////////////
double my_atof(const char *str);


////////////////////////////////////////////////////////////
/// \brief reallocate a block of memory
///
/// This function is used to reallocate a block of memory in the heap.
/// This means that if the free memory space following the block to be reallocated is large enough,
/// the memory block is simply enlarged. On the other hand, if the free space is not sufficient,
/// a new block of memory will be allocated, the contents of the original area will be copied
/// into the new area and the original block of memory will be freed automatically.
///
/// \param ptr the memory address of the memory block to be reallocated.
///
/// \param old_size old size (in bytes) to the old memory block.
///
/// \param mem_size allows you to specify the size (in bytes) of the memory block to be allocated.
///
/// \return If all goes well, the function returns a pointer to the reallocated memory area.
/// Be careful, this pointer is a generic pointer (void *): if necessary, it is your responsibility
/// to "cast" your pointer to another type (at least if you don't want to have a warning displayed
/// by the compiler, which I strongly recommend). In the event that the memory block cannot be reallocated
/// to you (no more memory available, for example), the NULL pointer will be returned.
/// One should normally and systematically test that the function does not return this value.
/// However, this is not always done by developers.
///
////////////////////////////////////////////////////////////
void *my_realloc(void *ptr, my_size_t old_size, my_size_t mem_size);


////////////////////////////////////////////////////////////
/// \brief This function allocates a block of memory by initializing all these bytes to the value 0.
///
/// \param count allows you to specify the number of consecutive elements to reserve in the memory block.
///
/// \param size allows you to set the size (in number of bytes) of an element.
///
/// \return If all goes well, the function returns a pointer to the newly allocated area.
/// Be careful, this pointer is of the generic pointer type (void *):
/// if necessary, it is your responsibility to "cast" your pointer to another type
/// (at least if you do not want to have a warning displayed by the compiler, which I strongly recommend).
///
////////////////////////////////////////////////////////////
void *my_calloc(my_size_t count, my_size_t size);

#define ARRAY_SIZE(x)   sizeof(x) / sizeof(*x)

#define FOREACH(item, array) \
    for(int keep_m = 1, \
            count = 0,\
            size = sizeof (array) / sizeof *(array); \
        keep_m && count != size; \
        keep_m = !keep_m, count++) \
        for(item = (array) + count; keep_m; keep_m = !keep_m)

#endif /* !MY_STDLIB_H_ */
