#include "phonebook.hpp"

int	main(void)
{
	int			res;
	int			page;
	std::string	command;
	PhoneBook	phoneBook;

	res = 1;
	page = 0;
	while (res)
	{
		std::cout << "Please enter your choice:" << std::endl;
		std::cin >> command;
		if (command.compare("ADD") == 0)
			add_func(&phoneBook, &page);
		if (command.compare("SEARCH") == 0)
			search_func(&phoneBook);
		if (command.compare("EXIT") == 0)
			res = 0;
	}
	return (0);
}