#include "PhoneBook.hpp"

static void ask_input(string output, string &str)
{
	cout << output;
	getline(cin, str);
	while (str.size() == 0)
	{
		getline(cin, str);
		if (str.size() == 0)
			cout << output;
	}
}

static bool	check_number(string &str)
{
	for (string::iterator it=str.begin(); it!=str.end(); ++it)
	{
		if (!isdigit(*it))
			return (false);
	}
	return (true);
}

static void	ask_number(string output, string &str)
{
	cout << output;
	getline(cin, str);
	while (str.size() == 0 || !check_number(str))
	{
		cout << output;
		getline(cin, str);
	}
}

//Function to loop to the last contact checking if it's more than the eighth

static int	get_index_phonebook(Contact phone_book[8])
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (!phone_book[i].first_name.size())
			return (i);
		i++;
	}
	return (i);
}

static void add(Contact phone_book[8])
{
	int			i;
	static int	j;
	string		str;
	string		&ref_str = str;

	i = get_index_phonebook(phone_book);
	if (j != 0 || i == 8)
	{
		j += 1;
		i = (j % 8) - 1;
	}
	ask_input("First Name: ", ref_str);
	phone_book[i].first_name = str;
	ask_input("Last Name: ", ref_str);
	phone_book[i].last_name = str;
	ask_input("NickName: ", ref_str);
	phone_book[i].nickname = str;
	ask_number("PhoneNumber: ", ref_str);
	phone_book[i].phone_number = str;
	ask_input("Darkest Secret: ", ref_str);
	phone_book[i].darkest_secret = str;
}

static void	output_name(string str)
{
	size_t	size;
	int		z;

	z = 0;
	size = str.size();
	if (size >= 10)
	{
		str = str.substr(0, 10);
		str[9] = '.';
	}
	else
	{
		while (z < 10 - size)
		{
			cout << " ";
			z++;
		}
	}
	cout << str;
	cout << "|";
}

static void	display_info(Contact &contact)
{
	cout << "First Name : " << contact.first_name << endl;
	cout << "Last Name : " << contact.last_name << endl;
	cout << "Nickname : " << contact.nickname << endl;
	cout << "Number : " << contact.phone_number << endl;
	cout << "Darkest secrets : " << contact.darkest_secret << endl;
	cout << endl;
}

void	search(Contact phone_book[8])
{
	int		index;
	int		j;
	int		i;
	string	str;
	string	&ref_str = str;

	i = 1;
	str = "-1";
	j = get_index_phonebook(phone_book);
	while (i <= j)
	{
		cout << "|    ";
		cout << i << "     ";
		cout << "|";
		output_name(phone_book[i - 1].first_name);
		output_name(phone_book[i - 1].last_name);
		output_name(phone_book[i - 1].nickname);
		cout << endl; 
		i++;
	}
	cout << stoi(str) << " HERE :" << j << endl;
	while (stoi(str) <= 0 && stoi(str) <= i - 1)
			ask_number("Wich one do you want to select ? ", ref_str);
	cout << endl;
	cout << phone_book[0].first_name << endl;
	if (stoi(str) > 0)
		display_info(phone_book[0]);
}

void	PhoneBook::handle_input(string input)
{
	if (input == "ADD")
		add(this->phone_book);
	else if (input == "SEARCH")
		search(this->phone_book);
}
