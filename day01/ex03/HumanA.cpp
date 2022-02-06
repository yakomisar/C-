#include "HumanA.hpp"

HumanA::HumanA(void)
{
    std::cout << "Constructor has been called" << std::endl;
}

HumanA::~HumanA(void)
{
    std::cout << "Destructor has been called" << std::endl;
}

HumanA::attack(void)
{
    std::cout << this->_name << " attacks with their " << this->_weapon << std::endl;
}