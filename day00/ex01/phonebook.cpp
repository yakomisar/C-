#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{
	//std::cout << "Constructor (PhoneBook) called" << std::endl;
	for (int i = 0; i < CONTACTS; i++)
	{
		this->contacts[i].set_index(0);
		this->contacts[i].set_firstName("");
		this->contacts[i].set_lastName("");
		this->contacts[i].set_nickName("");
		this->contacts[i].set_phone("");
	}
	return;
}

PhoneBook::~PhoneBook(void)
{
	//std::cout << "Destructor (PhoneBook) called" << std::endl;
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
	std::string	tmp_first;
	std::string	tmp_last;
	std::string	tmp_nick;
	std::string	tmp_phone;

	std::cout << "First name: ";
	
	std::getline(std::cin >> std::ws, tmp_first);
	newContact->set_firstName(tmp_first);
	std::cout << "Last name: ";
	std::getline(std::cin >> std::ws, tmp_last);
	newContact->set_lastName(tmp_last);
	std::cout << "Nickname: ";
	std::getline(std::cin >> std::ws, tmp_nick);
	newContact->set_nickName(tmp_nick);
	std::cout << "Phone number: ";
	// while (/* condition */)
	// {
	// 	/* code */
	// }
	
	std::getline(std::cin >> std::ws, tmp_phone);
	newContact->set_phone(tmp_phone);
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
		contact.set_index(*page + 1);
		phoneBook->contacts[*page] = contact;
		(*page)++;
	}
	else
	{
		fill_contact(&contact);
		contact.set_index(*page + 1);
		phoneBook->contacts[*page] = contact;
	}
}

void	display_contact(PhoneBook *phoneBook, int idx)
{
	if (idx > 8 || idx < 1)
	{
		std::cout << "Index out of range" << std::endl;
		return ;
	}
	else
	{
		if (phoneBook->contacts[idx - 1].get_index() == idx)
		{
			std::cout << "Index: " << phoneBook->contacts[idx - 1].get_index() << std::endl;
			std::cout << "First name: " << phoneBook->contacts[idx - 1].get_firstName() << std::endl;
			std::cout << "Last name: " << phoneBook->contacts[idx - 1].get_lastName() << std::endl;
			std::cout << "Nickname: " << phoneBook->contacts[idx - 1].get_nickName() << std::endl;
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
		if (phoneBook->contacts[i].get_index() != 0)
		{
			std::cout << std::setw(12) << phoneBook->contacts[i].get_index() << std::setw(1) << "|" << "\t";
			std::cout << std::setw(12) << truncate(phoneBook->contacts[i].get_firstName(), 10) << std::setw(1) << "|" << "\t";
			std::cout << std::setw(12) << truncate(phoneBook->contacts[i].get_lastName(), 10) << std::setw(1) << "|" << "\t";
			std::cout << std::setw(12) << truncate(phoneBook->contacts[i].get_nickName(), 10) << std::setw(1) << "|" << "\t" << std::endl;
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
