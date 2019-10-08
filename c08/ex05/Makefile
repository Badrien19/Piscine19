# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: badrien <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/18 09:47:31 by badrien           #+#    #+#              #
#    Updated: 2019/07/22 13:49:33 by badrien          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

OBJS = ${SRCS:.c=.o}

NAME = libft.a

CC = gcc -c

LIB = ar rc

RM = rm -rf

CFLAGS = -Wall -Wextra -Werror -I includes/

.c.o:	
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		${LIB} ${NAME} ${OBJS}

all: 	${$NAME}

clean: 
		${RM} ${OBJS}
fclean: clean
	${RM} ${NAME}

re: fclean all
	
.PHONY: 
	all clean fclean re 

