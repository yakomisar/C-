#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _weapon(NULL), _name(name)
{
    std::cout << "Constructor has been called" << std::endl;
}

HumanB::~HumanB(void)
{
    std::cout << "Destructor has been called" << std::endl;
}

void    HumanB::setWeapon(Weapon &weaponType)
{
    this->_weapon = weaponType;
}

void    HumanB::attack(void)
{
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}