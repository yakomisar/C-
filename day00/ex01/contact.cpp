#include "phonebook.hpp"

Contact::Contact(void)
{
	//std::cout << "Constructor (Contact) called" << std::endl;
}

Contact::~Contact(void)
{
	//std::cout << "Destructor (Contact) called" << std::endl;
}

void	Contact::set_index(int index)
{
	this->_index = index;	
}

void	Contact::set_firstName(std::string firstName)
{
	this->_firstName = firstName;
}

void	Contact::set_lastName(std::string lastName)
{
	this->_lastName = lastName;
}

void	Contact::set_nickName(std::string nickName)
{
	this->_nickName = nickName;
}

void	Contact::set_phone(std::string phone)
{
	this->_phone = phone;
}

int	Contact::get_index(void)
{
	return (this->_index);	
}

std::string	Contact::get_firstName(void)
{
	return (this->_firstName);
}

std::string	Contact::get_lastName(void)
{
	return (this->_lastName);
}

std::string	Contact::get_nickName(void)
{
	return (this->_nickName);
}

std::string	Contact::get_phone(void)
{
	return (this->_phone);
}
