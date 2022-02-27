#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Constructor [ClapTrap] w/o parameters called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(10)
{
	std::cout << "Constructor for " << this->_name << " has been called" << std::endl; 
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor for " << this->_name << " has been called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Конструктор копирования" << std::endl;
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_damage = other._attack_damage;	
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		std::cout << "Перегруженный оператор присваивания" << std::endl;
		this->_name = other._name;
		this->_hit_points = other._hit_points;
		this->_energy_points = other._energy_points;
		this->_attack_damage = other._attack_damage;
	}
	else 
	{
		std::cout << "Самоприсваивание" << std::endl;
	}
	return *this;
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