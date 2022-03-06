#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &)
{
	std::cout << "Конструктор копирования" << std::endl;
}

Intern &Intern::operator=(const Intern &)
{
	return *this;
}

Form	*Intern::makeForm(std::string const &name, std::string const &target)
{
	std::string	list_of_forms[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
	for (int i = 0; i < 3; i++)
	{
		if (list_of_forms[0].compare(name) == 0)
		{
			std::cout << "CREATING FORM..." << std::endl;
			return (new PresidentialPardonForm(target));
		}
		if (list_of_forms[1].compare(name) == 0)
		{
			std::cout << "CREATING FORM..." << std::endl;
			return (new RobotomyRequestForm(target));
		}
		if (list_of_forms[2].compare(name) == 0)
		{
			std::cout << "CREATING FORM..." << std::endl;
			return (new ShrubberyCreationForm(target));
		}
	}
	throw Intern::NoFormException();
}

Intern::~Intern()
{
}