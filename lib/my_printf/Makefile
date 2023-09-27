##
## EPITECH PROJECT, 2023
## makefile
## File description:
## makefile
##

SRC			=	toolbox/decimal_to_other_base.c		\
    			toolbox/my_compute_power_rec.c		\
    			toolbox/my_printf.c					\
    			toolbox/my_rev_str.c					\
    			toolbox/my_str_len.c					\
				toolbox/my_str_low_case.c				\
    			toolbox/print_char.c				\
    			toolbox/print_string.c				\
				flags/obtain_c.c					\
				flags/obtain_percent.c				\
				flags/obtain_s.c					\
				flags/obtain_d_i.c					\
				flags/obtain_u.c					\
				flags/obtain_x.c					\
				flags/obtain_x_maj.c				\
				flags/obtain_o.c					\
				flags/obtain_f.c					\
				flags/obtain_f_sub.c				\
				flags/obtain_f_ters.c				\
				flags/obtain_e.c					\
				flags/obtain_e_sub.c				\
				flags/obtain_e_ters.c				\
				flags/obtain_e_quad.c				\
				flags/obtain_p.c					\
				flags/obtain_b.c					\
				flags/obtain_g.c					\
				flags/obtain_precision.c

DIR_SRC =       $(addprefix src/, $(SRC))

OBJ			=	$(DIR_SRC:.c=.o)

NAME		=	../libmy_printf.a

CPPFLAGS	=	-I include/

$(NAME): $(OBJ)
	ar rcs $@ $^

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f unit_tests*

re: fclean all

unit_tests:	re
		gcc -o unit_tests $(DIR_SRC) tests/test_printf.c $(CPPFLAGS)\
		--coverage -lcriterion

tests_run:	unit_tests
			./unit_tests

.PHONY: all clean fclean
