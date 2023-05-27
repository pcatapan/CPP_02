# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcatapan <pcatapan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/10 21:40:04 by pcatapan          #+#    #+#              #
#    Updated: 2023/05/27 18:49:39 by pcatapan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ex02

SRC	= *.cpp

OBJ	=  ${SRCS:.cpp=.o}

CC = c++
FLAGS = -Wall -Werror -Wextra
CPPFLAGS = -std=c++98

RM		= rm -f

#Colors:
GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33;2;37m
RESET		=	\e[0m
CURSIVE		=	\e[33;3m

all:	${NAME}

${NAME}:	${OBJ}
	@$(CC) $(FLAGS) $(CPPFLAGS) $(SRC) -o $(NAME)
	@printf "$(_SUCCESS) $(GREEN)- Executable ready.\n$(RESET)"

clean:
	@${RM} ${OBJ}
	@printf "$(YELLOW)    - Object files removed.$(RESET)\n"

fclean:	clean
	@${RM} ${NAME}
	@printf "$(YELLOW)    - Executable removed.$(RESET)\n"

re:		fclean all

.PHONY: all clean fclean re