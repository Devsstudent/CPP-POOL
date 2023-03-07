CC = c++
CFLAGS = -std=c++98 -Wall -Werror -Wextra -MMD -Wshadow -Wno-shadow
OBJ = main.o ClapTrap.o ScavTrap.o FragTrap.o DiamondTrap.o
DD = $(OBJ:.o=.d)
NAME = DiamondTrap

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
