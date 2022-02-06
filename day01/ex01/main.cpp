#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombaks;
	int		amount;

	amount = 10;
	zombaks = zombieHorde(amount, "Loos");
	for (int i = 0; i < amount; i++)
	{
		zombaks[i].announce();
	}
	delete[] zombaks;
	return (0);
}
