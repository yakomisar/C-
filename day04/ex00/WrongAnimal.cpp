#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "uknown Animal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "Конструктор копирования" << std::endl;
	this->type = other.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
		if (this != &other) {
			std::cout << "Перегруженный оператор присваивания" << std::endl;
			this->type = other.type;
		}
		else {
			std::cout << "Самоприсваивание" << std::endl;
		}
		return *this;
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor for " << this->type << " called" << std::endl;
}
