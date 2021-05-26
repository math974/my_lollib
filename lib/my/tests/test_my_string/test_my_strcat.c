/*
** EPITECH PROJECT, 2021
** test_my_strcat.c
** File description:
** test function my_strcat
*/

#include <criterion/criterion.h>
#include "my_string.h"
#include <string.h>

Test(my_strcat, test1_my_strcat)
{
    char *str1 = "toto ";
    char *str2 = "papa";
    char *res = "toto papa";

    cr_assert_str_eq(my_strcat(str1, str2), res);
}