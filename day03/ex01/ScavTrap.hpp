#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &other);
		ScavTrap &operator=(const ScavTrap &other);
		~ScavTrap();
		void	guardGate();
		void	attack(const std::string &target);
};


#endif