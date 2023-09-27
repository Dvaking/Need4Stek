##
## EPITECH PROJECT, 2023
## makefile
## File description:
## makefile
##

SRC     =	my_compute_power_rec.c		\
			my_compute_square_root.c	\
			my_find_prime_sup.c			\
			my_is_prime.c				\
			my_is_neg.c					\
			my_put_nbr.c				\
			my_sort_int_array.c

EXT			=	../my_str/src/my_put_str.c	\
				../my_str/src/my_put_char.c	\
				../my_str/src/my_str_len.c

DIR_SRC	=		$(addprefix src/, $(SRC))

TEST	=	test_my_compute_power_rec.c		\
			test_my_compute_square_root.c	\
			test_my_find_prime_sup.c		\
			test_my_is_neg.c				\
			test_my_is_prime.c				\
			test_my_put_nbr.c				\
			test_my_sort_int_array.c

DIR_TESTS	=		$(addprefix tests/, $(TEST))

OBJ			=		$(DIR_SRC:.c=.o)

OBJ_EXT		=		$(EXT:.c=.o)

OBJ_TESTS	=		$(DIR_TESTS:.c=.o)

NAME		=		../libmy_int.a

$(NAME):		$(OBJ) $(OBJ_EXT)
	ar rcs $(NAME) $(OBJ) $(OBJ_EXT)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -rf unit_tests
	rm -rf *.gcov
	rm -f $(NAME)

re: fclean all

unit_tests:
	mkdir unit_tests

unit_tests/unit_tests:	unit_tests $(OBJ) $(OBJ_EXT)
		gcc -o unit_tests/unit_tests $(OBJ) $(OBJ_EXT) $(DIR_TESTS) -I include/\
		--coverage -lcriterion

tests_run:	unit_tests/unit_tests
			./unit_tests/unit_tests

.PHONY: all clean fclean re tests_run
