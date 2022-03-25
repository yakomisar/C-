#include "main.hpp"

int	check_string_chars(std::string str)
{
	int	i;
	int	dot;

	i = 0;
	dot = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (dot <=1 && (str[i] == '.' || ft_isdigit(str[i])))
			i++;
		else
			return (1);
	}
	return (0);
}

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
	if (check_string_chars(str))
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	std::cout << static_cast<int>(str[0]) << std::endl;
}
