/*
** EPITECH PROJECT, 2020
** my_stdio.h
** File description:
** input/output management
*/

#include <stdarg.h>

#ifndef MY_STDIO_H_
#define MY_STDIO_H_

typedef struct display_s {
    char *diplay;
    void (*format)(va_list);
}display_t;

int my_getnbr(char const *str);
int my_printf(const char *format, ...);
void my_perror(const char *prefix);
int my_puts(const char *string);
int my_putstr(char const *str);
void my_putchar(char c);
void my_put_nbr(int nb);
char *my_revstr(char *str);
void my_put_strS(char const *str);
int my_numlen(int nb);
int my_long_numlen(long int nb);
int my_unsign_numlen(unsigned int nb);
void my_put_hex(int nb);
void my_put_hex_maj(int nb);
void my_put_oct(unsigned int nb);
int my_get_oct(unsigned int nb);
void my_put_ptr(long int nb);
void my_put_nbru(unsigned int nb);
void my_put_bin(unsigned int nb);
void my_put_float(double nb);
void my_put_nbr_struct(va_list list);
void my_putstr_struct(va_list list);
void my_put_strS_struct(va_list list);
void my_putchar_struct(va_list list);
void my_puthex_struct(va_list list);
void my_puthex_maj_struct(va_list list);
void my_putoct_struct(va_list list);
void my_put_ptr_struct(va_list list);
void my_put_nbru_struct(va_list list);
void my_put_bin_struct(va_list list);
void my_put_float_struct(va_list list);
void formatting(const char *format, va_list list, int *i);
void loop_format(const char *format, va_list list, int *i, display_t *tab);

#endif /* !MY_STDIO_H_ */
