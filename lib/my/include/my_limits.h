/*
** EPITECH PROJECT, 2020
** my_limits.h
** File description:
** limits of integer arithmetic.
*/

#ifndef MY_LIMITS_H_
#define MY_LIMITS_H_

////////////////////////////////////////////////////////////
//
//     _ _           _ _
//    | (_)_ __ ___ (_) |_ ___
//    | | | '_ ` _ \| | __/ __|
//    | | | | | | | | | |_\__ |
//    |_|_|_| |_| |_|_|\__|___/
//
//    My_Limits.h header file in C is used to determine the set limits
//    of variable data stypes. Macros defined in my_limits.h are used to
//    find the limit of the values of various data types.
//    The defined limits specify that any variable can not
//    store any value beyond these limits.
//
////////////////////////////////////////////////////////////

#define CHAR_BIT    8
#define CHAR_MIN    -128
#define CHAR_MAX    127
#define INT_MIN     -2147483648
#define INT_MAX     2147483647
#define LONG_MIN    -9223372036854775808
#define LONG_MAX    9223372036854775807
#define MB_LEN_MAX  16
#define SCHAR_MIN   -128
#define SCHAR_MAX   127
#define SHRT_MIN    -32768
#define SHRT_MAX    32767
#define UCHAR_MAX   255
#define USHRT_MAX   65535
#define UINT_MAX    4294967295
#define ULONG_MAX   18446744073709551615
#define LLONG_MIN   -9223372036854775808
#define LLONG_MAX   9223372036854775807
#define ULLONG_MAX  18446744073709551615

#endif /* !MY_LIMITS_H_ */
