#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie my_zombie;

	my_zombie.setName(name);
	my_zombie.announce();
}
