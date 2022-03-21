#include "main.hpp"

void	check_int(std::string str)
{
	std::cout << "int: ";
	if (check_pseudo(str))
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	if (is_int(str) || is_float(str) || is_double(str))
	{
		std::cout << ft_atoi(str.c_str()) << std::endl;
		return ;
	}
	std::cout << static_cast<int>(str[0]) << std::endl;
}
