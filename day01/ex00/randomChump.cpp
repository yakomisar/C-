#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie *my_zombie;

	my_zombie = newZombie(name);
	my_zombie->announce();
	delete my_zombie;
}
