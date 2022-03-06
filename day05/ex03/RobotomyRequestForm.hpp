#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iomanip>
#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class Bureaucrat;

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(std::string name);
		RobotomyRequestForm(const RobotomyRequestForm &);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
		~RobotomyRequestForm();
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
				return "Robotomy failed";
			}
		};
};

#endif