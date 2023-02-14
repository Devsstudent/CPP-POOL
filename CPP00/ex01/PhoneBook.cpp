#include "PhoneBook.hpp"


static void ask_input(string output, string &str)
{
	cout << output;
	cin >> str;
	while (str.size() == 0)
		cin >> str;
	cout << endl;
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

void add(Contact phone_book[8])
{
	int			i;
	static int	j;
	string		str;
	string		&ref_str = str;

	i = get_index_phonebook(this.phone_book);
	if (j != 0 || i == 8)
	{
		j += 1;
		i = (j % 8) - 1;
	}
	ask_input("First Name: ", ref_str);
	this.phone_book[i].first_name = str;
	ask_input("Last Name: ", ref_str);
	this.phone_book[i].last_name = str;
	ask_input("NickName: ", ref_str);
	this.phone_book[i].nick_name = str;
	ask_input("PhoneNumber: ", ref_str);
	this.phone_book[i].phone_number = str;
	ask_input("Darkest Secret: ", ref_str);
	this.phone_book[i].darkest_secret = str;
}

static void	output_name(string str)
{
	size_t	size;
	int		z;

	z = 0;
	size = str.size();
	if (size >= 10)
	{
		str[9] = '.';
		cout << str;
	}
	else
	{
		cout << str;
		while (z < 10 - size)
			cout << " ";
	}
	cout << "|";
}

static void first_last_line(void)
{
	int	i;

	i = -1;
	while (++i < 45)
		cout << "_";
	cout << endl;
}


static void	search(void)
{
	int		index;
	int		j;
	int		i;

	i = 0;
	j = get_index_phonebook(this.phone_book);
	first_last_line();
	while (i < j)
	{
		cout << "|    ";
		cout << i << "     ";
		cout << "|";
		output_name(this.phone_book[i].first_name);
		output_name(this.phone_book[i].last_name);
		output_name(this.phone_book[i].last_name);
		cout << endl; 
		i++;
	}
	first_last_line();
}

void	handle_input(string input)
{
	if (input == "ADD")
		add(this->phone_book);
	else if (input == "SEARCH")
		search();
}
