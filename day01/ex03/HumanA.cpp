#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) :  _weapon(weapon), _name(name)
{
	std::cout << "Constructor for " << this->_name << " has been called" << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "Destructor for " << this->_name << " has been called" << std::endl;
}

void    HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}