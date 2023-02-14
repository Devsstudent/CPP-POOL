#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class	Contact {
	public:
		Contact();
		Contact(const Contact &a);
		~Contact();
		Contact & operator = (const Contact &a);
	private:
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
	private:
		void	handle_input(string input);
		Contact phone_book[8];
};

#endif 
