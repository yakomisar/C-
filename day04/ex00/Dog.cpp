#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
}

Dog::Dog(const Dog &other)
{
	std::cout << "Конструктор копирования" << std::endl;
	this->type = other.type;
}

Dog &Dog::operator=(const Dog &other)
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

void	Dog::makeSound() const
{
	std::cout << "Bark" << std::endl;
}

Dog::~Dog()
{
}