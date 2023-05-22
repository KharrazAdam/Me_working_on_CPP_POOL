# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/21 13:33:10 by akharraz          #+#    #+#              #
#    Updated: 2023/05/21 13:33:27 by akharraz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = PmergeMe

CC = c++

SRC = $(addsuffix .cpp, main PmergeMe)

INC = PmergeMe.hpp

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = $(SRC:.cpp=.o)
all : ${NAME}

${OBJS} : %.o: %.cpp ${INC}
	${CC} -c $(FLAGS) $< -o $@ -c

${NAME} : ${OBJS}
	${CC} ${FLAGS} ${OBJS} -o ${NAME}


clean : 
	rm -f ${OBJS}

fclean : clean
	rm -f ${NAME}

re : fclean all