# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/17 22:28:48 by akharraz          #+#    #+#              #
#    Updated: 2023/01/19 05:27:48 by akharraz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 28B

SRC = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp

OBJ = ${SRC:%.cpp=%.o}

INCLUDES = Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp

all: ${NAME}

${NAME}: ${OBJ} ${INCLUDES}
	c++ -Wall -Wextra -Werror -std=c++98 $(OBJ) -o $(NAME)

%.o : %.cpp
	c++ -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean:
	@rm -f ${OBJ} 

fclean: clean
	@rm -f ${NAME} *_shrubbery

re: fclean all
