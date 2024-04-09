# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/25 15:57:53 by gabriela          #+#    #+#              #
#    Updated: 2024/04/09 15:18:46 by gabriela         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#******************************************************************************#
#								  CONFIGURATION				       			   #
#******************************************************************************#

NAME = push_swap
CC = cc
CFLAGS = -g3 -Wall -Wextra -Werror

HEADERS = -I ./src/include -I ./libft
LIBS = ./libft/libft.a

#******************************************************************************#
#				     				FILES      								   #
#******************************************************************************#

SRC = src/

FILE = \
	push_swap.c\
	clear_memory.c\
	validations/valid_args.c\
	validations/valid_list.c\
	stack/create_stack.c\
	utils/ft_strcmp.c\
	utils/swap.c\
	utils/rotate.c\
	utils/rotate_reverse.c\
	utils/push.c\

SRC_FILES = $(addprefix $(SRC),$(FILE))
	
OBJS = $(SRC_FILES:.c=.o)

#******************************************************************************#
#				     				RULES      								   #
#******************************************************************************#

all: libft/libft.a $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(HEADERS) $(LIBS) -o $(NAME)

libft/libft.a:
	@make -sC ./libft

clean:
	@rm -rf $(OBJS)
	@make clean -sC ./libft

fclean: clean
	@cd libft && $(MAKE) fclean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re