# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelphias <aelphias@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/07 16:33:33 by aelphias          #+#    #+#              #
#    Updated: 2020/07/02 17:35:09 by aelphias         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRC	=		ft_printf.c

OBJ =		$(SRC:.c=.o)

HEAD =		ft_printf.h

NAME =		libftprintf.a

all:		$(NAME)

$(NAME):	$(OBJ)
			@ar -rcs $(NAME) $(OBJ)

%.o:		%.c $(HEAD)
			gcc -I. -I../libft -Wall -Wextra -Werror -g -c $< -o $@

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean all
