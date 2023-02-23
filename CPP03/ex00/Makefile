CC = c++
CFLAGS = -std=c++98 -Wall -Werror -Wextra -MMD
OBJ = main.o ClapTrap.o
DD = $(OBJ:.o=.d)
NAME = ClapTrap

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf *.o
	rm -rf *.d

fclean: clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all re fclean clean

-include $(DD)
