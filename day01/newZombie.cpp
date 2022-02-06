#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie	*my_zombie;

	my_zombie = new Zombie;
	my_zombie->setName(name);
	return (my_zombie);
}
