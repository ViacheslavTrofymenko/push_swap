# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vtrofyme <vtrofyme@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/19 10:26:16 by vtrofyme          #+#    #+#              #
#    Updated: 2025/06/14 16:43:05 by vtrofyme         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap
CC			= cc
CFLAGS		= -Wall -Werror -Wextra -g3

SRCS		= main.c ft_fill_stack.c ft_split.c push_swap_utils.c \
			stack_utils.c

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
