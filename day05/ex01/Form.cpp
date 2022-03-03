#include "Form.hpp"

Form::Form(std::string name, int grade_to_sign, int grade_to_exec) : name(name), is_signed(false), grade_to_sign(grade_to_sign), grade_to_exec(grade_to_exec)
{
	this->is_signed = false;
	if (grade_to_sign > 150)
		throw Form::GradeTooHighException();
	else if (grade_to_sign <= 0)
		throw Form::GradeTooLowException();

	if (grade_to_exec > 150)
		throw Form::GradeTooHighException();
	else if (grade_to_exec <= 0)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &other) : name(other.getName()), grade_to_sign(other.get_grade_to_sign()), grade_to_exec(other.get_grade_to_exec())
{
	std::cout << "Конструктор копирования" << std::endl;
	this->is_signed = other.is_signed;
}

Form &Form::operator=(const Form  &other)
{
		if (this != &other)
		{
			std::cout << "Перегруженный оператор присваивания" << std::endl;
			this->is_signed = other.is_signed;
		}
		else
		{
			std::cout << "Самоприсваивание" << std::endl;
		}
		return *this;
}

int	Form::get_grade_to_sign() const
{
	return (this->grade_to_sign);
}

int	Form::get_grade_to_exec() const
{
	return (this->grade_to_exec);
}

std::string	Form::getName() const
{
	return (this->name);
}

bool	Form::getStatus() const
{
	return (this->is_signed);
}

void	Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() <= this->get_grade_to_sign())
		this->is_signed = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &output, Form const &other)
{
	output << other.getName() << ", form is signed: " << other.getStatus() << ", grade to sign: " << other.get_grade_to_sign() << ", grade to exec: " << other.get_grade_to_exec();
	return (output);
}

Form::~Form()
{
}