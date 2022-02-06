#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weaponType) :  *_weapon(weaponType), _name(name)
{
    // this->_name = name;
    // this->_weapo = weaponType.getType();
    // this->_weapon = weaponType;
    std::cout << "Constructor has been called" << std::endl;
}

HumanA::~HumanA(void)
{
    std::cout << "Destructor has been called" << std::endl;
}

void    HumanA::attack(void)
{
    std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}