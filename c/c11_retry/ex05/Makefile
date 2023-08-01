# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/20 08:51:43 by tgaugain          #+#    #+#              #
#    Updated: 2023/07/20 08:55:15 by tgaugain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_atoi.c do-op.c 

CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

all: 
	${CC} ${CFLAGS} ${SRCS} -o do-op

clean:
		${RM} do-op

fclean:	clean

re:		fclean all