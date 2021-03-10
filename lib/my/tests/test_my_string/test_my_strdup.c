/*
** EPITECH PROJECT, 2020
** test_my_strdup.c
** File description:
** test function
*/

#include <criterion/criterion.h>
#include "my_string.h"

Test(strdup, test1_the_first_if)
{
	char *test = my_strdup("hello");
	char *test1 = my_strdup("");
	char *test2 = my_strdup("12345");

	cr_assert_str_eq(test, "hello");
	cr_assert_str_eq(test1, "");
	cr_assert_str_eq(test2, "12345");
}