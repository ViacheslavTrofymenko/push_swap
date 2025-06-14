# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vtrofyme <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/19 10:26:16 by vtrofyme          #+#    #+#              #
#    Updated: 2025/06/15 00:38:29 by vtrofyme         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap
CC			= cc
CFLAGS		= -Wall -Werror -Wextra -g3

SRCS		= main.c fill_stack.c ft_split.c free_errors_handle.c \
			stack_utils.c sort_few.c sort_command.c push_swap_init.c \
			swap_command.c push_command.c rotate_command.c reverse_rotate_command.c

OBJS		= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean:
	@rm -f	$(OBJS)

fclean: clean
	@rm -f	$(NAME)

re: fclean all

.PHONY: clean fclean re all bonus
