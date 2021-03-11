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

#define MIN(x,y) (((x) >= (y)) ? (y) : (x))
#define MAX(x,y) (((x) >= (y)) ? (x) : (y))

double my_pow(double nb, double p);
float my_powf(float value, float power);
long double my_powl(long double value, long double power);
int my_compute_square_root(int nb);
int my_isneg(int n);
double my_modf(double value, double *int_part);
float my_modff(float value, float *int_part);
long double my_modfl(long double value, long double *int_part);
double my_fmin(double x, double y);
float my_fminf(float x, float y);
long double my_fminl(long double x, long double y);
double my_fmax(double x, double y);
float my_fmaxf(float x, float y);
long double my_fmaxl(long double x, long double y);
double my_fdim(double x, double y);
float my_fdimf(float x, float y);
long double my_fdiml(long double x, long double y);

#endif /* !MY_MATH_H_ */
