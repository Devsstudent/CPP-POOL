#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include <iostream>
#include <ctype.h>
#include <stdlib.h>

class	Contact {

	public:
		Contact() {};
		~Contact(){};
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
};

class	PhoneBook {
	public:
		PhoneBook(){}
		~PhoneBook(){}
		PhoneBook & operator = (const PhoneBook &a);
		void	handle_input(std::string input);
	private:
		Contact phone_book[8];
};

#endif 
