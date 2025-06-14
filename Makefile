# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vtrofyme <vtrofyme@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/19 10:26:16 by vtrofyme          #+#    #+#              #
#    Updated: 2025/06/14 19:17:21 by vtrofyme         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap
CC			= cc
CFLAGS		= -Wall -Werror -Wextra -g3

SRCS		= main.c fill_stack.c ft_split.c push_swap_utils.c \
			stack_utils.c sort_few.c \
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
