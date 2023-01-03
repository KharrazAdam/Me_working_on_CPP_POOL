NAME = harlFilter

SRC = main.cpp Harl.cpp

OBJ = main.o Harl.o

all: ${NAME}

${NAME}: ${OBJ} 
	c++ -Wall -Wextra -Werror -std=c++98 $(OBJ) -o $(NAME)

%.o : %.cpp ${HEADER}
	c++ -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all