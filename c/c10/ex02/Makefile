# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/15 19:05:14 by tgaugain          #+#    #+#              #
#    Updated: 2023/07/26 08:42:15 by tgaugain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/tail.c \
			srcs/functions.c \
			srcs/ft_split.c \
			srcs/ft_atoi.c \
			srcs/functions2.c \
			srcs/errors.c

OBJS	= ${SRCS:.c=.o}

NAME	= ft_tail

CC		= gcc
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror -I ./

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

all: 		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all