#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>

class HumanB
{
	private:
		std::string _weapon;
        std::string _name;
	public:
		HumanB();
		~HumanB();
        void    attack();
};

#endif