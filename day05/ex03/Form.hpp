#ifndef FORM_HPP
# define FORM_HPP

#include <iomanip>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string target;
		const std::string name;
		bool		is_signed;
		const int	grade_to_sign;
		const int	grade_to_exec;
	public:
		Form(std::string const &target, std::string name, int grade_to_sign, int grade_to_exec);
		Form(const Form &);
		Form &operator=(const Form &other);
		virtual ~Form();
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
		class NotSignedException : public std::exception
		{
			const char* what() const throw()
			{
				return "Not signed";
			}
		};
		std::string		getName() const;
		std::string		getTarget() const;
		int				get_grade_to_sign() const;
		int				get_grade_to_exec() const;
		bool			getStatus() const;
		void			beSigned(const Bureaucrat &b);
		void			execute(Bureaucrat const &executor) const;
		void			sign();
		virtual void	checkExec(const Bureaucrat &executor) const = 0;
};

std::ostream &operator<<(std::ostream &output, Form const &other);

#endif