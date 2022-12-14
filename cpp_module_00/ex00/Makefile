# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 01:21:56 by akharraz          #+#    #+#              #
#    Updated: 2022/12/14 09:49:59 by akharraz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = megaphone.cpp

OBJS = megaphone.o

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++


all : ${NAME}

${NAME} : ${OBJS}
	${CC} ${FLAGS} ${OBJS} -o ${NAME}

${OBJS} : %.o: %.cpp
	${CC} -c $(FLAGS) $< -o $@ -c

clean : 
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${NAME}

re : fclean all
