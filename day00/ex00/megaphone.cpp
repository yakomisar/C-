#include <iostream>

void	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c = c - 32;
		std::cout << (char)c;
	}
	else
		std::cout << (char)c;
}

int	ft_isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

void	check_and_print(char *av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		if (ft_isalpha(av[i]))
			ft_toupper(av[i]);
		else
			std::cout << av[i];
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		for (int i = 1; i < argc; i++)
			check_and_print(argv[i]);
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
