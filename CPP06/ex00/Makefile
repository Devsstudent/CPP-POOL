CC=c++
CFLAGS=-std=c++98 -Wall -Werror -Wextra -MMD -g
OBJ = main.o ScalarConverter.o
DD=$(OBJ:.o=.d)
NAME = convert

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf *.d *.o

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: clean re fclean all

-include $(DD)
