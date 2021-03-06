# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelphias <aelphias@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/10 13:58:56 by aelphias          #+#    #+#              #
#    Updated: 2020/07/31 18:31:53 by aelphias         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re lib

NAME =			test

SRC =			main_int.c #main.c

OBJ =			$(SRC:.c=.o)

FT_LIB =		libft/libft.a

FT_PRINT =		ft_printf/libftprintf.a

CFLAGS =		-Wall -Wextra -Werror -g -O0

all:			
				@gcc $(CFLAGS) -o $(NAME) -I  ft_printf/ ft_printf/ft_printf.c \
				ft_printf/clean.c ft_printf/print_di.c ft_printf/parse_format.c \
				libft/ft_strstr.c libft/ft_putnbr.c -I libft/ \
				main_int.c libft/ft_strlen.c libft/ft_strncmp.c \
				libft/ft_putstr.c libft/ft_putchar.c libft/ft_strchr.c \
				libft/ft_bzero.c ft_printf/testing.c ft_printf/parse_spec.c
				
FORCE:			;

$(FT_LIB):		FORCE
				@make -C ./libft

$(FT_PRINT):	FORCE
				@make -C ./ft_printf

clean:		
				/bin/rm -f $(OBJ)
				make clean -C ./libft
				make clean -C ./ft_printf

fclean: 		clean
				make fclean -C ./libft
				make fclean -C ./ft_printf
				/bin/rm -f $(NAME)
				
re:				fclean all
