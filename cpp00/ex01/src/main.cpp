#include "PhoneBook.h"

void	showPrompt(void)
{
	cout << "welcome to the 80s and their unbelievable technology!" << endl
		 << "enter one of three options: ADD, SEARCH, EXIT"<< endl;
}

bool	till_getline(string &cmd)
{
	if (cin.good() || !cin.eof() ||  !cmd.empty())
		return (true);
	return (false);
}

int	main()
{
	PhoneBook	phonebook;
	string		cmd;
	
	showPrompt();
	while (till_getline(cmd))
	{
		if (cmd == "ADD")
			phonebook.addContact();
		else if (cmd == "SEARCH")
			phonebook.searchContact();
		else if (cmd == "EXIT")
			break ;
		else
			cerr << "warning! unrecognized command :" << cmd << endl
				 << "enter one of three options: ADD, SEARCH, EXIT" << endl;
	}
	std::cout << "EXIT" << std::endl;
	return (EXIT_SUCCESS);
}