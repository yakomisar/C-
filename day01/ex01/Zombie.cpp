#include "Zombie.hpp"

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

Zombie::Zombie(void)
{
	std::cout << "Constructor for zombie called" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Destructor for " << this->_name << " called" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << _name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
