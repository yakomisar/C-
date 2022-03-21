#include "main.hpp"

int	ft_atoi(const char *str)
{
	char		*s;
	int			result;
	int			i;
	short int	sign;

	i = 0;
	sign = 1;
	result = 0;
	s = (char *)str;
	while (s[i] == '\t' || s[i] == '\r' || s[i] == '\n'
		   || s[i] == ' ' || s[i] == '\f' || s[i] == '\v')
		i++;
	if (s[i] == '-' || s[i] == '+')
	{	
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = (result * 10) + (s[i] - '0');
		i++;
	}
	return (result * sign);
}

int	is_float(std::string str)
{
	size_t	i;
	int		dots;

	i = 0;
	dots = 0;
	if (str[str.length() - 1] != 'f')
		return (0);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (i < str.length() - 1)
	{
		if (str[i] == '.')
		{
			dots++;
			i++;
			continue ;
		}
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	if (dots > 1)
		return (0);
	return (1);
}

int	is_double(std::string str)
{
	size_t	i;
	int		dots;

	i = 0;
	dots = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (i < str.length() - 1)
	{
		if (str[i] == '.')
		{
			dots++;
			i++;
			continue ;
		}
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	if (dots > 1)
		return (0);
	return (1);
}

int	check_pseudo(std::string str)
{
	int	size;

	std::string	pseudo[] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};
	size = sizeof(pseudo) / sizeof(pseudo[0]);
	for (int i = 0; i < size; i++)
	{
		if (str.compare(pseudo[i]) == 0)
			return (1);
	}
	return (0);
}
