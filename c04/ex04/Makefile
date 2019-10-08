# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: badrien <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/24 14:10:21 by badrien           #+#    #+#              #
#    Updated: 2019/07/24 14:19:27 by badrien          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = do_op.c

OBJS = ${SRCS:.c=.o}

NAME = do-op

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

CC = gcc

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
	${CC} ${OBJS} -o ${NAME}

all: 	${$NAME}

clean: 
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean ${NAME}

.PHONY: 
	all clean fclean re 
