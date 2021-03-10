/*
** EPITECH PROJECT, 2020
** tests_my_printf.c
** File description:
** unit tests
*/

#include "my_stdio.h"
#include <stdio.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test (my_printf_txt, tests_my_printf, .init = redirect_all_std)
{
    my_printf("hello world");
    cr_assert_stdout_eq_str("hello world");
}

/*Test (my_printf_txt1, tests_my_printf1, .init = redirect_all_std)
{
    char *str = malloc(sizeof(char) * (3));
    my_printf("%                d\n", 45);
    sprintf(str, "%                d\n", 45);
    cr_assert_stdout_eq_str(str);
}*/

Test (my_printf_txt2, tests_my_printf2, .init = redirect_all_std)
{
    my_printf("%s%%%d%s\n", "astek", 42, "moulinette");
    cr_assert_stdout_eq_str("astek%42moulinette");
}

/*Test (my_printf_txt3, tests_my_printf3, .init = redirect_all_std)
{
    my_printf("%%s%%d%s%d%%\n", "Astek", 42);
    sprintf("%%s%%d%s%d%%\n", "Astek", 42);
    cr_assert_stdout_eq_str("%s%dAstek42%");
}*/

Test (my_printf_d, tests_my_printf_d, .init = redirect_all_std)
{
    my_printf("%d", 52);
    cr_assert_stdout_eq_str("52");
}

Test (my_printf_negd, tests_my_printf_d, .init = redirect_all_std)
{
    my_printf("%d", -789);
    cr_assert_stdout_eq_str("-789");
}

Test (my_printf_oct, tests_my_printf_d, .init = redirect_all_std)
{
    my_printf("%o", 18565);
    cr_assert_stdout_eq_str("44205");
}

Test (my_printf_oct2, tests_my_printf_o, .init = redirect_all_std)
{
    my_printf("%o", -1);
    cr_assert_stdout_eq_str("37777777777");
}

Test (my_printf_hex, test_my_printf_h, .init = redirect_all_std)
{
    my_printf("%x", 12589);
    cr_assert_stdout_eq_str("312d");
}

Test (my_printf_neg_hex, tests_hex, .init = redirect_all_std)
{
    my_printf("%x", -1);
    cr_assert_stdout_eq_str("ffffffff");
}

Test (my_printf_S, tests_S, .init = redirect_all_std)
{
    my_printf("%S", "t\nto");
    cr_assert_stdout_eq_str("t\\012to");
}

Test (my_printf_S2, tests_S, .init = redirect_all_std)
{
    char str[6];
    strcpy(str , "maman");
    str[4] = 127;
    my_printf("%S", str);
    cr_assert_stdout_eq_str("mama\\177");
}

Test (my_printf_char, tests_char, .init = redirect_all_std)
{
    my_printf("%c", 't');
    cr_assert_stdout_eq_str("t");
}

Test (my_printf_char2, tests_char2, .init = redirect_all_std)
{
    my_printf("%C", 't');
    cr_assert_stdout_eq_str("t");
}

Test (my_printf_bin, tests_bin, .init = redirect_all_std)
{
    my_printf("%b", 1565);
    cr_assert_stdout_eq_str("11000011101");
}

Test (my_printf_neg_bin, tests_neg_bin, .init = redirect_all_std)
{
    my_printf("%b", -15);
    cr_assert_stdout_eq_str("11111111111111111111111111110001");
}

Test (my_printf_float, tests_float, .init = redirect_all_std)
{
    my_printf("%f", 465.5423);
    cr_assert_stdout_eq_str("465.542300");
}

Test (my_printf_hex_maj, tests_hex_maj, .init = redirect_all_std)
{
    my_printf("%X", 45265);
    cr_assert_stdout_eq_str("B0D1");
}

/*Test (my_printf_p, tests_p, .init = redirect_all_std)
{
    int nb = 256;
    my_printf("%p", &nb);
    sprintf
    cr_assert_stdout_eq_str();
}*/




