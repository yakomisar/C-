#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iomanip>
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string name;
		int	grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name);
		Bureaucrat(const Bureaucrat &);
		Bureaucrat	&operator=(const Bureaucrat &other);
		~Bureaucrat();
		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return "Unable to set such a high grade";
			}
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return "Unable to set such a low grade";
			}
		};
		void		setGrade(int grade);
		int			getGrade() const;
		std::string	getName() const;
		void		incrementGrade();
		void		decrementGrade();
		void		signForm(Form &form);
		void		executeForm(const Form &form);
};

std::ostream &operator<<(std::ostream &output, Bureaucrat const &other);

#endif