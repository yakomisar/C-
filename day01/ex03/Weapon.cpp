#include "Weapon.hpp"

Weapon::Weapon(std::string weaponType) : _type(weaponType)
{
    std::cout << "Constructor for " << this->_type << " called" << std::endl;
}

Weapon::~Weapon(void)
{
    std::cout << "Desctructor for " << this->_type << " called" << std::endl;
}

void    Weapon::setType(std::string type)
{
    this->_type = type;
}

std::string const   &Weapon::getType()
{
    return this->_type;
} 