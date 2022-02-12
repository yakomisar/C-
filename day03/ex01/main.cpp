#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap clap("ClapBap");
    ScavTrap scav("ScavBap");
    clap.attack("Misha");
    scav.attack("Andrey");
    scav.guardGate();

	return (0);
}