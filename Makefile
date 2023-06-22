# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: justindaly <justindaly@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/08 17:46:32 by jdaly             #+#    #+#              #
#    Updated: 2023/06/22 20:11:14 by justindaly       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
CFLAGS = -Wall -Werror -Wextra #-fsanitize=address -g


SRC = main.c 0_errors.c 0_stack_utils.c 0_actions.c 0_actions2.c 1_sort_small.c

OBJ = $(SRC:.c=.o)

LIBFT_DIR	:= ./libft
LIBFT	:= $(LIBFT_DIR)/libft.a

%.o: %.c
	$(CC) -Wall -Wextra -Werror -Ilibft -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -Llibft -lft -o $@

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f $(LIBFT)

re: fclean all

.PHONY: all clean fclean re
