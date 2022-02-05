#include "phonebook.hpp"

Contact::Contact(void)
{
	std::cout << "Constructor (Contact) called" << std::endl;
	return;
}

Contact::~Contact(void)
{
	std::cout << "Destructor (Contact) called" << std::endl;
	return;
}

PhoneBook::PhoneBook(void)
{
	std::cout << "Constructor (PhoneBook) called" << std::endl;
	for (int i = 0; i < CONTACTS; i++)
	{
		this->contacts[i].index = 0;
		this->contacts[i].firstName = "";
		this->contacts[i].lastName = "";
		this->contacts[i].nickname = "";
	}
	return;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor (PhoneBook) called" << std::endl;
	return;
}