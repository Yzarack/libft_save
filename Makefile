# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jthierce <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 17:06:40 by jthierce          #+#    #+#              #
#    Updated: 2018/11/08 18:47:41 by jthierce         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FILE = ft_putstr.c\
	  ft_putchar.c\
	  ft_strcmp.c\
	  ft_strlen.c\
	  ft_swap.c
SRC = $(addprefix srcs/, $(FILE))
OBJ = $(FILE:.c=.o)

all: $(NAME)

$(NAME): oui
	ar rc $(NAME) $(OBJ)

oui:
	gcc -c $(SRC)

.PHONY: fclean

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)
