#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
    std::cout << "Constructor for " << this->_name << " has been called" << std::endl;
}

HumanB::~HumanB(void)
{
    std::cout << "Destructor for " << this->_name << " has been called" << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}

void    HumanB::attack(void)
{
    std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}