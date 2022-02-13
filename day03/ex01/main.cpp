#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap clap("Gena");
    ScavTrap scav("Igor");
    clap.attack("Misha");
    scav.attack("Andrey");
    scav.guardGate();

	return (0);
}