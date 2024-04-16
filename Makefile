# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabriela <gabriela@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/25 15:57:53 by gabriela          #+#    #+#              #
#    Updated: 2024/04/14 17:08:41 by gabriela         ###   ########.fr        #
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
	validations/validations.c\
	stack/create_stack.c\
	utils/clear_memory.c\
	utils/ft_strcmp.c\
	order_operations/swap.c\
	order_operations/rotate.c\
	order_operations/rotate_reverse.c\
	order_operations/push.c\
	sort_list/is_sorted.c\
	sort_list/sort_stack.c\
	sort_list/sort_small_stack.c\

SRC_FILES = $(addprefix $(SRC),$(FILE))
	
OBJS = $(SRC_FILES:.c=.o)

#******************************************************************************#
#				     				RULES      								   #
#******************************************************************************#

all: libft/libft.a $(NAME)

$(NAME): $(OBJS)
	echo "Compiling push_swap"
	@$(CC) $(CFLAGS) $(OBJS) $(HEADERS) $(LIBS) -o $(NAME)
	echo "push_swap has been compiled..."

libft/libft.a:
	echo "Compling libft..."
	@make -sC ./libft
	echo "Libft has been compiled..."

clean:
	@rm -rf $(OBJS)
	@make clean -sC ./libft

fclean: clean
	@cd libft && $(MAKE) fclean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re