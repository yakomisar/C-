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
	std::cout << std::endl;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	std::cout << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
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
			std::cout << "[ DEBUG ]" << std::endl;
			(this->*arrPTR[0])();
		case 2:
			std::cout << "[ INFO ]" << std::endl;
			(this->*arrPTR[1])();
		case 3:
			std::cout << "[ WARNING ]" << std::endl;
			(this->*arrPTR[2])();
		case 4:
			std::cout << "[ ERROR ]" << std::endl;
			(this->*arrPTR[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}