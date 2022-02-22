#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	protected:
		std::string	_name;
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &other);
		DiamondTrap &operator=(const DiamondTrap &other);
		~DiamondTrap();
		void		whoAmI();
};

#endif