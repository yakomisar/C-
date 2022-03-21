#include "main.hpp"

void	check_char(std::string str)
{
	int	ch;

	ch = 0;
	if (check_pseudo(str))
	{
		std::cout << "char: impossible" << std::endl;
		return ;
	}
	if (check_symbol(str) && !check_digit(str[0]))
	{
		std::cout << "char: '" << static_cast<char>(str[0]) << "'" << std::endl;
		return ;
	}
	else
	{
		ch = ft_atoi(str.c_str());
		if (check_printable(ch))
		{
			std::cout << "char: '" << static_cast<char>(ch) << "'" << std::endl;
			return ;
		}
		std::cout << "char: Non displayable" << std::endl;
	}
}
