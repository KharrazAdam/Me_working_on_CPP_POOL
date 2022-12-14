NAME = Zombie

SRC = Zombie.cpp newZombie.cpp randomChump.cpp main.cpp

OBJS = Zombie.o newZombie.o randomChump.o main.o

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
