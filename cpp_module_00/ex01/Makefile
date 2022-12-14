# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/07 22:14:35 by akharraz          #+#    #+#              #
#    Updated: 2022/12/08 21:20:34 by akharraz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main

SRC = main.cpp

OBJS = main.o

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

INCLUDE = Contact.hpp PhoneBook.hpp

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
