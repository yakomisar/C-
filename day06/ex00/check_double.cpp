#include "main.hpp"

void	check_double(std::string str)
{
	double	result;
	
	std::cout << "double: ";
	if (is_float(str))
	{
		result = atof(str.c_str());
		std::cout << static_cast<float>(result) <<std::endl;
		return ;
	}
	if (is_int(str))
	{
		result = atof(str.c_str());
		std::cout << result << ".0" << std::endl;
		return ;
	}
	if (is_double(str))
	{
		result = atof(str.c_str());
		std::cout << static_cast<float>(result) <<std::endl;
		return ;
	}
	if (check_pseudo(str))
	{
		std::cout << str << std::endl;
		return ;
	}
}