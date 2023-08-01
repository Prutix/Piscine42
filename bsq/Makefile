# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/24 09:14:09 by tgaugain          #+#    #+#              #
#    Updated: 2023/07/24 13:47:49 by tgaugain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/*.c

CC		= cc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror -g

NAME = bsq

all: 
	${CC} ${CFLAGS} ${SRCS} -o ${NAME}

clean:
		${RM} ./srcs/*.o

fclean:	clean
		${RM} ${NAME}

re:		fclean all
