# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esafar <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/09 13:16:20 by esafar            #+#    #+#              #
#    Updated: 2022/01/09 13:16:52 by esafar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libunit.a

# RADIX = launch_tests load_test clean_list pipe display_message
DIR = ./
SRC = launch_tests.c \
	load_test.c \
	clean_list.c \
	pipe.c \
	display_message.c

SRC_LIB = ./utils/srcs/ft_putstr_fd.c \
		./utils/srcs/ft_putnbr_fd.c \
		./utils/srcs/ft_putchar_fd.c \
		./utils/srcs/ft_strlen.c \
		./utils/srcs/ft_bzero.c \
		./utils/srcs/ft_memset.c \
		./utils/srcs/ft_memcmp.c \
		./utils/srcs/ft_strequ.c \
		./utils/srcs/ft_strcmp.c \
		./utils/srcs/ft_strdup.c 
		
OBJ = ${SRC:.c=.o}
OBJ_LIB = ${SRC_LIB:.c=.o}

CC = cc
CFLAGS = -Wall -Wextra -Werror

RED                             =       \033[0;31m
GREEN                   =       \033[0;32m
NC                              =       \033[0m

$(NAME) : $(OBJ) ${OBJ_LIB}
		@echo "$(GREEN)Objects created.$(NC)"
		$(CC) $(CFLAGS) -c $(SRC) $(SRC_LIB)
		@ar rcs ${NAME} ${OBJ} ${OBJ_LIB}
		@echo "$(GREEN)Program created.$(NC)"
		@echo "$(GREEN)Executable moved to root.$(NC)"

all : $(NAME)

clean :
		@rm -f $(OBJ) $(OBJ_LIB) *.o
		@echo "$(RED)Objects deleted.$(NC)"

fclean : clean
		@rm -f ../libunit.a
		@echo "$(RED)libunit.a deleted.$(NC)"

re : fclean all

.PHONY: all re clean fclean
