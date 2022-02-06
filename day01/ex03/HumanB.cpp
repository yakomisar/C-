#include "HumanB.hpp"

HumanB::HumanB(void)
{
    std::cout << "Constructor has been called" << std::endl;
}

HumanB::~HumanB(void)
{
    std::cout << "Destructor has been called" << std::endl;
}

HumanB::attack(void)
{
    std::cout << this->_name << " attacks with their " << this->_weapon << std::endl;
}