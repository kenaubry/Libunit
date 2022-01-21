NAME = libunit.a

all: $(NAME)

$(NAME):
		@make -C framework
		@make -C tests
		@make -C real-test
clean:
		@make -C framework clean
		@make -C tests clean
		@make -C real-test clean

fclean:
		@make -C framework fclean
		@make -C tests fclean
		@make -C real-test fclean

re: fclean all

test:
		@make -C tests test

.PHONY: all clean fclean re test