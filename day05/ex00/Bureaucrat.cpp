#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("")
{
}

Bureaucrat::Bureaucrat(std::string name) : name(name)
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &)
{
	std::cout << "Конструктор копирования" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat  &other)
{
		if (this != &other)
		{
			std::cout << "Перегруженный оператор присваивания" << std::endl;
		}
		else
		{
			std::cout << "Самоприсваивание" << std::endl;
		}
		return *this;
}

void	Bureaucrat::setGrade(int grade)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
	else if (grade <= 0)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade = grade;
}

int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

std::string	Bureaucrat::getName() const
{
	return (this->name);
}

void	Bureaucrat::incrementGrade()
{
	if (grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade -= 1;
}

void	Bureaucrat::decrementGrade()
{
	if (grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade += 1;
}


Bureaucrat::~Bureaucrat()
{
}