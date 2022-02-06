#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <limits>

class Zombie
{
	private:
		std::string	_name;
	public:
		Zombie(std::string name);
		Zombie();
		~Zombie();
		void	announce(void);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif