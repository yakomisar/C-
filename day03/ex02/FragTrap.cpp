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

FragTrap::FragTrap(const FragTrap &other)
{
	std::cout << "Конструктор копирования" << std::endl;
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_damage = other._attack_damage;	
}

FragTrap	&FragTrap::operator=(const FragTrap &other)
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

void	FragTrap::highFiveGuys(void)
{
	std::cout << "Hi Five Guys from " << this->_name << std::endl;
}