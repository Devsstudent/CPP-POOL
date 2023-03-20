CFLAGS = -Werror -Wall -Wextra -std=c++98 -g -MMD  -fsanitize=address
CC = c++
OBJ = main.o PmergeMe.o
DD = $(OBJ:.o=.d)
NAME = PmergeMe

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
	

