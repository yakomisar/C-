#ifndef INTERN_HPP
# define INTERN_HPP

#include <iomanip>
#include <iostream>
#include "Bureaucrat.hpp"

class Form;
class Presid;
class PresidentialPardonForm;
class RobotomyRequestForm;
class ShrubberyCreationForm;

class Intern
{
	public:
	Intern();
	Intern(const Intern &);
	Intern &operator=(const Intern &);
	~Intern();
	Form	*makeForm(std::string const &name, std::string const &target);
	class NoFormException : public std::exception
	{
		const char* what() const throw()
		{
			return "No such form";
		}
	};
};

#endif