CFLAGS = -Werror -Wall -Wextra -std=c++98 -g -MMD
CC = c++
OBJ = main.o BitcoinExchange.o
DD = $(OBJ:.o=.d)
NAME = btc

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
	

