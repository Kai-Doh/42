# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/01 01:12:25 by ktiomico          #+#    #+#              #
#    Updated: 2024/10/01 01:16:29 by ktiomico         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =
OBJS = $(SRCS:.c=.o)
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I.
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
