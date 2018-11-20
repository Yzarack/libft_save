# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jthierce <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 17:06:40 by jthierce          #+#    #+#              #
#    Updated: 2018/11/17 12:49:52 by jthierce         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FILE = ft_atoi.c\
	   ft_bzero.c\
	   ft_isalnum.c\
	   ft_isalpha.c\
	   ft_isascii.c\
	   ft_isdigit.c\
	   ft_isprint.c\
	   ft_memalloc.c\
	   ft_memccpy.c\
	   ft_memchr.c\
	   ft_memcmp.c\
	   ft_memcpy.c\
	   ft_memmove.c\
	   ft_memset.c\
	   ft_strcat.c\
	   ft_strchr.c\
	   ft_strclr.c\
	   ft_strcpy.c\
	   ft_strdup.c\
	   ft_strdel.c\
	   ft_strequ.c\
	   ft_striter.c\
	   ft_striteri.c\
	   ft_strlcat.c\
	   ft_strmap.c\
	   ft_strmapi.c\
	   ft_strncat.c\
	   ft_strncpy.c\
	   ft_strnequ.c\
	   ft_strnew.c\
	   ft_strnstr.c\
	   ft_strrchr.c\
	   ft_strstr.c\
	   ft_tolower.c\
	   ft_toupper.c\
	   ft_strlen.c\
	   ft_strsub.c
OBJ = $(FILE:.c=.o)
FLAG = -Wextra -Werror -Wall

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

$(OBJ):
	gcc $(FILE) -c $(FILE)

.PHONY: fclean

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)
