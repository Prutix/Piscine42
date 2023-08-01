# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/22 08:37:25 by tgaugain          #+#    #+#              #
#    Updated: 2023/07/23 08:57:20 by tgaugain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/atoi.c srcs/main.c srcs/functions.c srcs/split.c srcs/functions2.c srcs/putnbr.c

CC		= cc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

all: 
	${CC} ${CFLAGS} ${SRCS} -o rush-02

clean:
		${RM} ./srcs/*.o

fclean:	clean
		${RM} rush-02

re:		fclean all