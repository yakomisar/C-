#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>

class HumanA
{
	private:
		std::string _weapon;
        std::string _name;
	public:
		HumanA();
		~HumanA();
        void    attack();
};

#endif