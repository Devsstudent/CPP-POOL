#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include <iostream>

using namespace std;

class	Contact {
	public:
	Contact() : first_name(NULL), last_name(NULL), nickname(NULL), phone_number(NULL), darkest_secret(NULL) {}
		Contact(const Contact &a);
		~Contact();
		Contact & operator = (const Contact &a);
		string	first_name;
		string	last_name;
		string	nickname;
		string	phone_number;
		string	darkest_secret;
};

class	PhoneBook {
	public:
		PhoneBook();
		PhoneBook(const PhoneBook &a);
		~PhoneBook();
		PhoneBook & operator = (const PhoneBook &a);
		void	handle_input(string input);
	void add(void);
	private:
		Contact phone_book[8];
};

#endif 
