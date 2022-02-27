#include "Cat.hpp"

Cat::Cat(): Animal()
{
	this->type = "Cat";
}

Cat::Cat(const Cat &other)
{
	std::cout << "Конструктор копирования" << std::endl;
	this->type = other.type;
}

Cat &Cat::operator=(const Cat &other)
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

void	Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

Cat::~Cat()
{
}