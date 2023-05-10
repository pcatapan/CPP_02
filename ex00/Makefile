# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcatapan <pcatapan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/10 21:39:05 by pcatapan          #+#    #+#              #
#    Updated: 2023/05/10 21:39:08 by pcatapan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp \
		  Fixed.cpp

OBJS	=  ${SRCS:.cpp=.o}

NAME	= ex00
CC		= c++
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror -std=c++98

all:	${NAME}

${NAME}:	${OBJS}
	@${CC} ${CFLAGS} -o ${NAME} ${SRCS}

clean:
		${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:		fclean all

.PHONY: all clean fclean re
