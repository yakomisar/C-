#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap clap("Gena");
    ScavTrap scav("Igor");
    clap.attack("Misha");
    scav.attack("Andrey");
    scav.guardGate();

    FragTrap    john("John");
    john.attack("Gena");
    john.attack("Igor");
    john.beRepaired(10);
    
    john.highFiveGuys();

	return (0);
}