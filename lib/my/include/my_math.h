/*
** EPITECH PROJECT, 2020
** my_math.h
** File description:
** my librairie math
*/

#ifndef MY_MATH_H_
#define MY_MATH_H_

////////////////////////////////////////////////////////////
//
//                                         _   _
//     _ __ ___  _   _     _ __ ___   __ _| |_| |__
//    | '_ ` _ \| | | |   | '_ ` _ \ / _` | __| '_ \.
//    | | | | | | |_| |   | | | | | | (_| | |_| | | |
//    |_| |_| |_|\__, |___|_| |_| |_|\__,_|\__|_| |_|
//               |___/_____|
//
//    This library gives access to the mathematics function.
//
////////////////////////////////////////////////////////////

int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_isneg(int n);
double my_modf(double value, double *int_part);

#endif /* !MY_MATH_H_ */
