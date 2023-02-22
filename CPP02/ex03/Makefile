CC = c++
CFLAGS = -g -MMD -Werror -Wextra -Wall -std=c++98
NAME = bsp
OBJ = main.o Fixed.o Point.o bsp.o
DD = $(OBJ:.o=.d)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(DD)
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean re

.PHONY: all re clean fclean

-include $(DD)
