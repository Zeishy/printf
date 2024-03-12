##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## compiles my libmy
##

SRC	=	$(wildcard *.c)

CRIFLAG =	-l criterion --coverage

NAME_TEST = unit_test

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	rm -f $(NAME_TEST)
	rm -f *~
	rm -f *#
	rm -f *.gcda
	rm -f *.gcno

re:	fclean all

tests_run:
	gcc $(SRC) tests/test_my_printf.c -o $(NAME_TEST) $(CRIFLAG)
	./$(NAME_TEST) --verbose
