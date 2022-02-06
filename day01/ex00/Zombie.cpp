#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "Constructor for " << this->_name << " called" << std::endl;
	return;
}

Zombie::~Zombie(void)
{
	std::cout << "Destructor for " << this->_name << " called" << std::endl;
	return;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
