#include "Cat.hpp"

Cat::Cat(): Animal()
{
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat &other)
{
	std::cout << "Конструктор копирования" << std::endl;
	this->type = other.type;
	this->brain = other.brain;
}

Cat &Cat::operator=(const Cat &other)
{
		if (this != &other) {
			std::cout << "Перегруженный оператор присваивания" << std::endl;
			this->type = other.type;
			this->brain = new Brain(*other.getBrain());
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

Brain *Cat::getBrain() const
{
	return this->brain;
}

Cat::~Cat()
{
	delete this->brain;
}