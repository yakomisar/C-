#include "ScavTrap.hpp"


ScavTrap::ScavTrap()
{
	std::cout << "Constructor [ScavTrap] has been called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_energy_points = 20;
	std::cout << "Constructor [ScavTrap] for " << this->_name << " has been called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor [ScavTrap] for " << this->_name << " has been called" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;	
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	std::cout << "Конструктор копирования" << std::endl;
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_damage = other._attack_damage;
}

ScavTrap &ScavTrap::operator=(const ScavTrap  &other)
{
		if (this != &other) {
			std::cout << "Перегруженный оператор присваивания" << std::endl;
			this->_name = other._name;
			this->_hit_points = other._hit_points;
			this->_energy_points = other._energy_points;
			this->_attack_damage = other._attack_damage;
		}
		else {
			std::cout << "Самоприсваивание" << std::endl;
		}
		return *this;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_energy_points != 0 && this->_hit_points >= 10)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage" << std::endl;
		this->_attack_damage -= 10;
		this->_energy_points -= 1;
	}
	else
		std::cout << "ScavTrap " << this->_name << " says: No energy or attack points left" << std::endl;
}