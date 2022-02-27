#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog &other)
{
	std::cout << "Конструктор копирования" << std::endl;
	this->type = other.type;
	this->brain = other.brain;
}

Dog &Dog::operator=(const Dog &other)
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

void	Dog::makeSound() const
{
	std::cout << "Bark" << std::endl;
}

Brain *Dog::getBrain() const
{
	return this->brain;
}

Dog::~Dog()
{
	delete this->brain;
}