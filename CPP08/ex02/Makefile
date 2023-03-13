CFLAGS = -Werror -Wall -Wextra -g -MMD
CC = c++
OBJ = main.o MutantStack.o
DD = $(OBJ:.o=.d)
NAME = mutated_abomination

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -I ./ -o $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf *.o
	rm -rf *.d

fclean: clean
	rm -rf $(NAME)

re : fclean all

-include $(DD)
	

