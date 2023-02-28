CC = c++
CFLAGS = -g -MMD -Werror -Wextra -Wall -std=c++98
NAME = fixed_point
OBJ = main.o Fixed.o
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

re: fclean all

.PHONY: all re clean fclean

-include $(DD)
