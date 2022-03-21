#include "main.hpp"

int	check_printable(int c)
{
	return (c >= 32 && c <= 126);
}

int	check_symbol(std::string str)
{
	if (str.size() == 1)
		return (1);
	return (0);
}

int	check_digit(char c)
{
	return (c >= 48 && c <= 57);	
}

int	ft_isdigit(char c)
{
	return (c >= 48 && c <= 57);
}

int	is_int(std::string str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		try
		{
			check_char(argv[1]);
			check_int(argv[1]);
			check_float(argv[1]);
			check_double(argv[1]);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Please specify an argument for conversion (char, int, double or float)" << std::endl;
		}
	}
	else
		std::cout << "Please specify an argument for conversion (char, int, double or float)" << std::endl;
	return (0);
}