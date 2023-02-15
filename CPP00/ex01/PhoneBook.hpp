#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include <iostream>
#include <ctype.h>

using namespace std;

class	Contact {

	public:
		Contact() { cout << "Contact Constructed" << endl;}
		Contact(const Contact &a){};
		~Contact(){ cout << "Contact destroyed" << endl;};
		Contact & operator = (const Contact &a);
		string	first_name;
		string	last_name;
		string	nickname;
		string	phone_number;
		string	darkest_secret;
};

class	PhoneBook {
	public:
		PhoneBook(){ cout << "PhoneBook created" << endl;}
		PhoneBook(const PhoneBook &a){};
		~PhoneBook(){ cout << "PhoneBook destroyed";}
		PhoneBook & operator = (const PhoneBook &a);
		void	handle_input(string input);
	private:
		Contact phone_book[8];
};

#endif 
