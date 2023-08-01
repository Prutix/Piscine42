# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tgaugain <tgaugain@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/15 19:05:14 by tgaugain          #+#    #+#              #
#    Updated: 2023/07/18 08:55:56 by tgaugain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_display_file.c 

CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

all: 
	${CC} ${CFLAGS} -c ${SRCS} -o ft_display_file
	gcc ${SRCS} ${CFLAGS} -o ft_display_file

clean:
		${RM} ft_display_file

fclean:	clean

re:		fclean all
