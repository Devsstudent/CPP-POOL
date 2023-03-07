CFLAGS = -Werror -Wall -Wextra -std=c++98 -g -MMD
CC = c++
OBJ = main.o
DD = $(OBJ:.o=.d)
NAME = ex01

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
	

