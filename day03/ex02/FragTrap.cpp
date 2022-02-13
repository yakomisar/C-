#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "Constructor [FragTrap] for " << this->_name << " has been called" << std::endl;
}

FragTrap::FragTrap()
{
	std::cout << "Constructor for DEFAULT [FragTrap] has been called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor [FragTrap] for " << this->_name << " has been called" << std::endl;
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "Hi Five Guys from " << this->_name << std::endl;
}