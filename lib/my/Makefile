##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## compile my librairie
##

SRC		=	my_linked_list/create_linked_listes.c \
			my_linked_list/my_list_size.c \
			my_linked_list/delate_linked_list.c \
			my_linked_list/push_first_in_list.c \
			my_linked_list/push_last_in_list.c \
			my_linked_list/display_link.c \
			my_linked_list/remove_the_first_element.c \
			my_linked_list/remove_the_last_element.c \
			my_linked_list/my_params_in_list.c \
			my_linked_list/my_params_last_to_list.c \
			my_linked_list/push_at_insert_in_list.c \
			my_linked_list/remove_any_element.c \
			my_stdio/my_printf/my_printf.c \
			my_stdio/my_perror.c \
			my_stdio/my_puts.c \
			my_stdio/my_printf/function_struct.c \
			my_stdio/my_printf/function_struct2.c \
			my_stdio/my_printf/function_struct3.c \
			my_stdio/my_printf/my_putchar.c \
			my_stdio/my_printf/my_putstr.c \
			my_stdio/my_printf/my_put_str_maj.c \
			my_stdio/my_printf/my_put_nbr.c \
			my_stdio/my_printf/my_revstr.c \
			my_stdio/my_printf/my_numlen.c \
			my_stdio/my_printf/my_long_numlen.c \
			my_stdio/my_printf/my_put_hex.c \
			my_stdio/my_printf/my_put_hex_maj.c \
			my_stdio/my_printf/my_put_oct.c \
			my_stdio/my_printf/my_get_oct.c \
			my_stdio/my_printf/my_put_ptr.c \
			my_stdio/my_printf/my_put_bin.c \
			my_stdio/my_printf/my_put_float.c \
			my_stdio/my_getnbr.c \
			my_ctype/my_isalnum.c \
			my_ctype/my_isalpha.c \
			my_ctype/my_iscntrl.c \
			my_ctype/my_isdigit.c \
			my_ctype/my_islower.c \
			my_ctype/my_isprint.c \
			my_ctype/my_ispunct.c \
			my_ctype/my_isspace.c \
			my_ctype/my_isupper.c \
			my_string/my_str_isalpha.c \
			my_string/my_str_islower.c \
			my_string/my_str_isnum.c \
			my_string/my_str_isprintable.c \
			my_string/my_str_isupper.c \
			my_string/my_strlowcase.c \
			my_string/my_strucase.c \
			my_string/my_revstr.c \
			my_string/my_strcapitalize.c \
			my_string/my_strcmp.c \
			my_string/my_strcpy.c \
			my_string/my_strncmp.c \
			my_string/my_strncpy.c \
			my_string/my_strstr.c \
			my_string/my_strlen.c \
			my_string/my_strdup.c \
			my_string/my_memset.c \
			my_string/my_memcpy.c \
			my_string/my_clean_str.c \
			my_string/my_strdeleate_chara.c \
			my_string/my_strcat.c \
			my_math/my_compute_power_rec.c \
			my_math/my_compute_square_root.c \
			my_math/my_isneg.c \
			my_function/my_swap.c \
			my_function/my_str_to_word_array.c \
			my_function/my_str_to_word_array_choice.c \
			my_function/my_input.c \
			my_function/my_size.c \
			my_function/my_display_array.c \
			my_function/my_display_array_int.c \
			my_function/len_array.c \
			my_function/my_size_line.c \
			my_function/free_array.c \
			my_function/copy_array.c \
			my_function/parser/my_indexof.c \
			my_stdlib/my_abs.c \
			my_stdlib/my_labs.c \
			my_stdlib/my_llabs.c \
			my_stdlib/my_atoi.c \
			my_stdlib/my_atol.c \
			my_stdlib/my_atoll.c \
			my_stdlib/my_atof.c \
			my_stdlib/my_div.c \
			my_stdlib/my_ldiv.c \
			my_stdlib/my_lldiv.c \
			my_stdlib/my_realloc.c \
			my_stdlib/my_calloc.c \

SRCT 	=	tests/test_my_stdio/tests_my_printf.c \
			tests/test_my_string/test_my_strdup.c \

OBJ		=	$(SRC:.c=.o)

NAME	=	libmy.a

NAMET 	= 	unit_tests

CFLAGS	+=	-W -Wall -Werror -Wextra -g

CFLAGS	+=	-I./include/

CFLAGS	+=	-L. -lmy

all: build

list:
	ls

gcovr:
	gcovr -e $(NAMET) -b

build:	$(OBJ)
	ar rc $(NAME) $(OBJ)

tests_run: fclean build
	gcc -o $(NAMET)	$(SRCT)	$(CFLAGS) -lcriterion --coverage
	./$(NAMET)

clean:
	rm -f $(OBJ)
	rm -f *.gcda *.gcno *.c.gcov
	rm -f vgcore*

fclean:	clean
	rm -f $(NAME)
	rm -f $(NAMET)

re:	fclean all

auteur:
	echo $(USER) > auteur

t:	tests_run

c:	
	gcovr --exclude tests/

b:	
	gcovr --exclude tests/ --branches