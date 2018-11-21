# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgrudler <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/10 13:21:42 by lgrudler          #+#    #+#              #
#    Updated: 2018/11/20 16:36:44 by lgrudler         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Werror -Wextra

SRC = $(wildcard *.c)
# METTRE TOUS LES NOMS

HDR = ./libft.h

OBJET = $(SRC:.c=.o)

all : $(NAME)

$(NAME) :
	gcc $(FLAGS) -c $(SRC) -I $(HDR)
	ar rc $(NAME) $(OBJET)
	ranlib $(NAME)

clean :
	rm -rf $(OBJET)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
