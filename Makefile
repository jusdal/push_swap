# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdaly <jdaly@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/08 17:46:32 by jdaly             #+#    #+#              #
#    Updated: 2023/06/23 18:46:41 by jdaly            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
CFLAGS = -Wall -Werror -Wextra #-fsanitize=address -g


SRC = 0_actions1.c 0_actions2.c 0_errors.c 0_stack_utils.c 1_stack_init.c \
	2_sort_small.c 3_sort_large.c main.c

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
