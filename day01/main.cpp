#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie1;
	Zombie	zombie2;

	
	zombie1->setName("Boss");
	zombie1->announce();
	zombie2.setName("Molokossos");

	delete zombie1;
	return (0);
}