#include "phonebook.hpp"

Contact::Contact(void)
{
	//std::cout << "Constructor (Contact) called" << std::endl;
	return;
}

Contact::~Contact(void)
{
	//std::cout << "Destructor (Contact) called" << std::endl;
	return;
}

PhoneBook::PhoneBook(void)
{
	//std::cout << "Constructor (PhoneBook) called" << std::endl;
	for (int i = 0; i < CONTACTS; i++)
	{
		this->contacts[i].index = 0;
		this->contacts[i].firstName = "";
		this->contacts[i].lastName = "";
		this->contacts[i].nickname = "";
		this->contacts[i].phone = "";
	}
	return;
}

PhoneBook::~PhoneBook(void)
{
	//std::cout << "Destructor (PhoneBook) called" << std::endl;
	return;
}

std::string truncate(std::string str, size_t width, bool show_ellipsis=true)
{
    if (str.length() > width)
        return str.substr(0, width) + ".";
    return str;
}

void	fill_contact(Contact *newContact)
{
	std::string	darkest_secret;
	std::string	tmp;

	std::cout << "First name: ";
	
	std::getline(std::cin >> std::ws, newContact->firstName);
	std::cout << "Last name: ";
	std::getline(std::cin >> std::ws, newContact->lastName);
	std::cout << "Nickname: ";
	std::getline(std::cin >> std::ws, newContact->nickname);
	std::cout << "Phone number: ";
	while (/* condition */)
	{
		/* code */
	}
	
	std::getline(std::cin >> std::ws, newContact->phone);
	std::cout << "Darkest secret: ";
	std::cin >> darkest_secret;
}

void	add_func(PhoneBook *phoneBook, int *page)
{
	Contact		contact;
	
	std::cout << "Please add a new contact" << std::endl;
	if (*page != 7)
	{
		fill_contact(&contact);
		contact.index = *page + 1;
		phoneBook->contacts[*page] = contact;
		(*page)++;
	}
	else
	{
		fill_contact(&contact);
		contact.index = *page + 1;
		phoneBook->contacts[*page] = contact;
	}
}

void	display_contact(PhoneBook *phoneBook, int idx)
{
	if (idx > 7 || idx < 1)
	{
		std::cout << "Index out of range" << std::endl;
		return ;
	}
	else
	{
		if (phoneBook->contacts[idx - 1].index == idx)
		{
			std::cout << "Index: " << phoneBook->contacts[idx - 1].index << std::endl;
			std::cout << "First name: " << phoneBook->contacts[idx - 1].firstName << std::endl;
			std::cout << "Last name: " << phoneBook->contacts[idx - 1].lastName << std::endl;
			std::cout << "Nickname: " << phoneBook->contacts[idx - 1].nickname << std::endl;
		}
		else
			std::cout << "Index out of range" << std::endl;
			return ;
	}
}

void	search_func(PhoneBook *phoneBook)
{
	int	idx;

	idx = 0;
	std::cout << std::setw(12) << "Index" << std::setw(1) << "|" << "\t";
	std::cout << std::setw(12) << "FirstName" << std::setw(1) << "|" << "\t";
	std::cout << std::setw(12) << "LastName" << std::setw(1) << "|" << "\t";
	std::cout << std::setw(12) << "Nickname" << std::setw(1) << "|" << "\t" << std::endl;	
	for (int i = 0; i < CONTACTS; i++)
	{
		if (phoneBook->contacts[i].index != 0)
		{
			std::cout << std::setw(12) << phoneBook->contacts[i].index << std::setw(1) << "|" << "\t";
			std::cout << std::setw(12) << truncate(phoneBook->contacts[i].firstName, 10) << std::setw(1) << "|" << "\t";
			std::cout << std::setw(12) << truncate(phoneBook->contacts[i].lastName, 10) << std::setw(1) << "|" << "\t";
			std::cout << std::setw(12) << truncate(phoneBook->contacts[i].nickname, 10) << std::setw(1) << "|" << "\t" << std::endl;
		}
	}
	std::cout << "Select index: ";
	while (42)
	{
		if (std::cin >> idx)
		{
			display_contact(phoneBook, idx);
			break ;
		}
		else
		{
			std::cout << "Enter a valid integer index: ";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}
}

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
