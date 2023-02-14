#include <iostream.h>
#include "phonebook.hpp"

void	main(void)

{
	string		input;
	PhoneBook	PhoneBoook;

	cout << "Welcome to my PhoneBook program :)" << endl;
	cout << "Enter ADD to add some contact to your personal PhoneBook" << endl;
	cout << "Enter SEARCH to view and search in your personal PhoneBook" << endl;
	cout << "Enter EXIT to exit this beautiful program" << endl;
	cin >> input;
	while (input != "EXIT")
	{
		//handle_input(input, PhoneBook);
		PhoneBook.handle_input(input);
		cin >> input;
	}
}
