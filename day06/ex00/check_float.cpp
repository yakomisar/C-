#include "main.hpp"

int	only_zeros(std::string str)
{
	size_t	i;

	i = 0;
	while (i < str.length() && str[i] != '.')
		i++;
	i++;
	while (i < str.length() - 1)
	{
		if (str[i] != '0')
			return (0);
		i++;
	}
	return (1);
}

int	no_dot(std::string str)
{
	size_t	i;

	i = 0;
	while (i < str.length())
	{
		if (str[i] == '.')
			return (0);
		i++;
	}
	return (1);
}

int	check_zero(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] == '.' && str[i + 1] == 'f')
			return (1);
	}
	if (no_dot(str))
		return (1);
	return (0);
}

void	check_float(std::string str)
{
	double	result;
	
	std::cout << "float: ";
	if (is_float(str))
	{
		result = atof(str.c_str());
		if (check_zero(str))
		{
			std::cout << static_cast<float>(result) << ".0f" <<std::endl;
			return ;
		}
		if (only_zeros(str))
		{
			std::cout << static_cast<float>(result) << ".0f" <<std::endl;
			return ;
		}
		std::cout << static_cast<float>(result) << "f" <<std::endl;
		return ;
	}
	if (is_int(str))
	{
		result = atof(str.c_str());
		std::cout << static_cast<float>(result) << ".0f" << std::endl;
		return ;
	}
	if (is_double(str))
	{
		result = atof(str.c_str());
		std::cout << result << "f" <<std::endl;
		return ;
	}
	if (check_pseudo(str))
	{
		if (str.compare("nan") == 0)
			std::cout << str << 'f' << std::endl;
		else
			std::cout << str << std::endl;
		return ;
	}
}