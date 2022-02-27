#include "Karen.hpp"

Karen::Karen(void)
{
}

Karen::~Karen(void)
{
}

void	Karen::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Karen::complain(std::string level)
{
	std::map <std::string, int>	mapping;
	void						(Karen::*arrPTR[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	
	mapping["DEFAULT"] = 0;
	mapping["DEBUG"] = 1;
	mapping["INFO"] = 2;
	mapping["WARNING"] = 3;
	mapping["ERROR"] = 4;
	switch (mapping[level])
	{
		case 1:
			(this->*arrPTR[0])();
			break;
		case 2:
			(this->*arrPTR[1])();
			break;
		case 3:
			(this->*arrPTR[2])();
			break;
		case 4:
			(this->*arrPTR[3])();
			break;
		default:
			break;
	}
}