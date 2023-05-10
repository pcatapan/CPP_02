# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcatapan <pcatapan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/10 21:39:05 by pcatapan          #+#    #+#              #
#    Updated: 2023/05/10 21:44:03 by pcatapan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ex00

SRC	= *.cpp

OBJ	=  ${SRCS:.cpp=.o}

CC = g++

FLAGS = -Wall -Werror -Wextra

CPPFLAGS = -std=c++98

RM		= rm -f

all:	${NAME}

${NAME}:	${OBJ}
	@$(CC) $(FLAGS) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
	@${RM} ${OBJ}

fclean:	clean
	@${RM} ${NAME}

re:		fclean all

.PHONY: all clean fclean re