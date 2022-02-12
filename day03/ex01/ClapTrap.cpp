#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(10)
{
	std::cout << "Constructor [ClapTrap] for " << this->_name << " has been called" << std::endl;
}

ClapTrap::ClapTrap()
{
	std::cout << "Constructor for DEFAULT [ClapTrap] has been called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor [ClapTrap] for " << this->_name << " has been called" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_energy_points != 0 && this->_hit_points >= 10)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage" << std::endl;
		this->_attack_damage -= 10;
		this->_energy_points -= 1;
	}
	else
		std::cout << "ClapTrap " << this->_name << " says: No energy or attack points left" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name << " got damaged of " << amount << " points" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points != 0)
	{
		this->_hit_points += amount;
		std::cout << "ClapTrap " << this->_name << " repaired his hit_points to : " << amount << std::endl;
		this->_energy_points -= 1;
	}
	else
		std::cout << "ClapTrap " << this->_name << " says: No energy points left" << std::endl;
}