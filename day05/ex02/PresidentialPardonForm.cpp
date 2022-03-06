#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string name) : Form(name, "Presidential Pardon Form", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : Form(other)
{
	std::cout << "Конструктор копирования" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm  &other)
{
		if (this != &other)
		{
			std::cout << "Перегруженный оператор присваивания" << std::endl;
			this->operator=(other);
		}
		else
		{
			std::cout << "Самоприсваивание" << std::endl;
		}
		return (*this);
}

void	PresidentialPardonForm::checkExec(const Bureaucrat &executor) const
{
	this->execute(executor);
	std::cout << "The " << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

std::ostream &operator<<(std::ostream &output, PresidentialPardonForm const &other)
{
	output << other.getName() << ", PresidentialPardonForm is signed: " << other.getStatus() << ", grade to sign: " << other.get_grade_to_sign() << ", grade to exec: " << other.get_grade_to_exec();
	return (output);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}