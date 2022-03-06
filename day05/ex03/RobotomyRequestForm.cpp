#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string name) : Form(name, "Robotomy Request Form", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form(other)
{
	std::cout << "Конструктор копирования" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm  &other)
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

void	RobotomyRequestForm::checkExec(const Bureaucrat &executor) const
{
	this->execute(executor);
	std::cout << "The " << this->getTarget() << " has been robotomized successfully 50" "%" " of the time" << std::endl;
}

std::ostream &operator<<(std::ostream &output, RobotomyRequestForm const &other)
{
	output << other.getName() << ", RobotomyRequestForm is signed: " << other.getStatus() << ", grade to sign: " << other.get_grade_to_sign() << ", grade to exec: " << other.get_grade_to_exec();
	return (output);
}

Form *RobotomyRequestForm::create(std::string const &target)
{
	return new RobotomyRequestForm(target);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}