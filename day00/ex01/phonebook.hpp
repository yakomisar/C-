#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# define CONTACTS 8

# include <iostream>
# include <iomanip>
# include <string>
# include <limits>

class Contact
{
	private:
		int			_index;
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phone;
	public:
		Contact();
		~Contact();
		// getters
		int			get_index(void);
		std::string	get_firstName(void);
		std::string	get_lastName(void);
		std::string	get_nickName(void);
		std::string	get_phone(void);
		// setters
		void		set_index(int index);
		void		set_firstName(std::string firstName);
		void		set_lastName(std::string lastName);
		void		set_nickName(std::string nickName);
		void		set_phone(std::string phone);
};

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		Contact	contacts[CONTACTS];
};

void		add_func(PhoneBook *phoneBook, int *page);
void		display_contact(PhoneBook *phoneBook, int idx);
void		search_func(PhoneBook *phoneBook);
void		fill_contact(Contact *newContact);

#endif