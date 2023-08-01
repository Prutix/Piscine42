# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/15 19:05:14 by tgaugain          #+#    #+#              #
#    Updated: 2023/07/25 14:17:08 by tgaugain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_cat.c functions.c

OBJS	= ${SRCS:.c=.o}

NAME	= ft_cat

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