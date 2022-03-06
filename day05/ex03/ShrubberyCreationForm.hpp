#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iomanip>
#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(std::string name);
		ShrubberyCreationForm(const ShrubberyCreationForm &);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
		~ShrubberyCreationForm();
		void	checkExec(const Bureaucrat &executor) const;
		Form	*create(std::string const &target);
		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return "Grade is too high";
			}
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return "Grade is too low";
			}
		};
};

#endif