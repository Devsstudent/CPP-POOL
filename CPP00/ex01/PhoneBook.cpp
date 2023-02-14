#include "phonebook.hpp"

Contact(void) : first_name(NULL) last_name(NULL) nick_name(NULL) phone_number(NULL)
{
	this.darkest_secret = NULL;
};

static void ask_input(string output, string &str)
{
	cout << output;
	cin >> str;
	while (!str)
		cin >> str;
	cout << endl;
}

//Function to loop to the last contact checking if it's more than the eighth

static void add(void)
{
	string	str;
	string	ref_str & = str;
	ask_input("First Name: ", ref_str);
	this.
	ask_input("Last Name: ", ref_str);
	ask_input("NickName: ", ref_str);
	ask_input("PhoneNumber: ", ref_str);
	ask_input("Darkest Secret: ", ref_str);
}

static void search(void)
{
	int	index;
}

void	handle_input(string input)
{
	if (input == ADD)
		add();
	else if (input == SEARCH)
		search();
}
