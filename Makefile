# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luprevos <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/24 16:07:23 by luprevos          #+#    #+#              #
#    Updated: 2024/07/16 13:38:30 by luprevos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror -Iinclude
RM = rm -f

NAME = libftprintf.a 

SRC = ft_printf.c \
      ft_printchar.c \
      ft_printstr.c \
      ft_printhex.c \
      ft_printptr.c \
      ft_printpercent.c \
      ft_printdec.c \
      ft_printunsigned.c


OBJ = $(SRC:.c=.o)

.c.o:
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean
