CFLAGS = -Werror -Wall -Wextra -std=c++98 -g -MMD
CC = c++
OBJ = $(addprefix obj/, main.o Zombie.o randomChump.o newZombie.o)
DD = $(OBJ:.o=.d)
NAME = zombie

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

obj/%.o : src/%.cpp | object
	$(CC) $(CFLAGS) -I ./ -c $< -o $@

object:
	mkdir -p obj/

clean:
	rm -rf obj/

fclean: clean
	rm -rf $(NAME)

re : fclean all

-include $(DD)
