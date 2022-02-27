#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other)
{
	std::cout << "Конструктор копирования" << std::endl;
	this->type = other.type;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
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

void	WrongCat::makeSound() const
{
	std::cout << "WRONG Meow" << std::endl;
}

WrongCat::~WrongCat()
{
}