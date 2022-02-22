#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Constructor [DiamondTrap] w/o parameters called" << std::endl; 
}

DiamondTrap::DiamondTrap(std::string name)
{
	this->_name = name + "_clap_name";
	std::cout << "Constructor for " << this->_name << " has been called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor for " << this->_name << " has been called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
	std::cout << "Конструктор копирования" << std::endl;
	*this = other;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other)
	{
		std::cout << "Перегруженный оператор присваивания" << std::endl;
		this->_name = other._name;
	}
	else 
	{
		std::cout << "Самоприсваивание" << std::endl;
	}
	return *this;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "Name DiamondTrap is " << this->_name << std::endl;
}