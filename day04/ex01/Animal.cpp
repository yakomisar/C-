#include "Animal.hpp"

Animal::Animal()
{
	this->type = "uknown Animal";
}

Animal::Animal(const Animal &other)
{
	std::cout << "Конструктор копирования" << std::endl;
	this->type = other.type;
}

Animal &Animal::operator=(const Animal &other)
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

std::string	Animal::getType() const
{
	return (this->type);
}

void	Animal::makeSound() const
{
	std::cout << "Animal" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Destructor for " << this->type << " called" << std::endl;
}
