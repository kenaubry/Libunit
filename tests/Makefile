# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esafar <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/09 12:07:43 by esafar            #+#    #+#              #
#    Updated: 2022/01/09 22:50:12 by kenaubry         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME                    =       exec

FW_FOLDER               =       ../framework
FRAMEWORKLIB    =       -L$(FW_FOLDER) -lunit
FRAMEWORK               =       $(FW_FOLDER)/libunit.a

CC                              =       cc
CFLAGS                  +=      -Wall -Werror -Wextra
RM                              =       /bin/rm
RMFLAGS                 +=      -rf

SRCS                    =       main.c \
								./ft_atoi/00_ft_atoi_launcher.c \
								./ft_atoi/01_basic_atoi_test.c \
								./ft_atoi/02_zero_test.c \
								./ft_atoi/03_negative_test.c \
								./ft_atoi/04_plus_sign_test.c \
								./ft_atoi/05_space_test.c \
								./ft_atoi/06_space_plus_test.c \
								./ft_atoi/07_space_negative_test.c \
								./ft_atoi/08_word_after_test.c \
								./ft_atoi/09_zero_before_num_test.c \
								./ft_atoi/10_zero_before_neg_num_test.c \
								./ft_atoi/11_multiple_zero_test.c \
								./ft_strlen/00_strlen_launcher.c \
								./ft_strlen/01_basic_strlen_test.c \
								./ft_strlen/02_null_strlen_test.c \
								./ft_strlen/03_longstr_strlen_test.c \
								./ft_strjoin/00_strjoin_launcher.c \
								./ft_strjoin/01_basic_strjoin_test.c \
								./ft_strjoin/02_null_strjoin_test.c \
								./ft_strjoin/03_longstr_strjoin_test.c \
								./strcpy/00_basic_strcpy_launcher.c \
								./strcpy/01_basic_strcpy_test_ok.c \
								./strcpy/02_basic_strcpy_test_ko.c \
								./strcpy/03_basic_strcpy_test_segv.c \
								./strcpy/04_basic_strcpy_test_buse.c

SRCS                    +=      ../function_to_test/ft_atoi.c \
								../function_to_test/ft_strlen.c \
								../function_to_test/ft_strjoin.c \
								../function_to_test/ft_strcpy.c \


OBJS                    =       $(notdir $(SRCS:.c=.o))

INCL_FOLDER             =       $(FW_FOLDER)/includes

RED                             =       \033[0;31m
GREEN                   =       \033[0;32m
NC                              =       \033[0m

all: $(NAME)

$(NAME): $(OBJS)
		@echo "$(GREEN)Objects created.$(NC)"
		@$(CC) $(CFLAGS) -I $(INCL_FOLDER) $(OBJS) ${FRAMEWORK} $(FRAMEWORKLIB) -o $(NAME)
		@echo "$(GREEN)Program created.$(NC)"

$(FRAMEWORK):
		@make -C $(FW_FOLDER) re

$(OBJS):
		@$(CC) $(CFLAGS) -I $(INCL_FOLDER) -c $(SRCS)

test: $(NAME)
		@./$(NAME)

clean:
		@$(RM) $(RMFLAGS) $(OBJS)
		@echo "$(RED)Objects deleted.$(NC)"

fclean: clean
		@$(RM) $(RMFLAGS) $(NAME)
		@echo "$(RED)Program deleted.$(NC)"

re: fclean all

.PHONY: all clean test fclean re

