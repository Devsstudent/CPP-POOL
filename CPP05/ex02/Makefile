CC=c++
CFLAGS = -MMD -g -Wall -Werror -Wextra -std=c++98
NAME = Bureaucratie
OBJ = Bureaucrat.o main.o AForm.o ShrubberyCreationForm.o RobotomyRequestForm.o PresidentialPardonForm.o
DD = $(OBJ:.o=.d)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(DD) $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY:all clean re fclean

-include $(DD)
