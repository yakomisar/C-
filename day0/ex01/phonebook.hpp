#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# define CONTACTS 8

# include <iostream>
# include <iomanip>
# include <string>
# include <limits>

class Contact
{
	public:
		Contact();
		~Contact();
		int			index;
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	phone;
};

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		Contact	contacts[CONTACTS];
};

#endif