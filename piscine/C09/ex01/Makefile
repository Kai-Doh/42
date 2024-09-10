# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/08 17:47:57 by ktiomico          #+#    #+#              #
#    Updated: 2024/09/10 23:35:04 by ktiomico         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm -rf

SOURCES =	srcs/ft_putchar.c \
			srcs/ft_swap.c \
			srcs/ft_putstr.c \
			srcs/ft_strlen.c \
			srcs/ft_strcmp.c \

OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	@$(AR) $@ $(OBJECTS)
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
clean:
	@$(RM) $(OBJECTS)
fclean: clean
	@$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re
