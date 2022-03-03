#ifndef FORM_HPP
# define FORM_HPP

#include <iomanip>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		bool		is_signed;
		const int	grade_to_sign;
		const int	grade_to_exec;
	public:
		Form(std::string name, int grade_to_sign, int grade_to_exec);
		Form(const Form &);
		Form &operator=(const Form &other);
		~Form();
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
		std::string	getName() const;
		int			get_grade_to_sign() const;
		int			get_grade_to_exec() const;
		bool		getStatus() const;
		void		beSigned(const Bureaucrat &b);
};

std::ostream &operator<<(std::ostream &output, Form const &other);

#endif