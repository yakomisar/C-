#include "Karen.hpp"

int	main(int argc, char **argv)
{
	Karen		my_Karen;
	std::string	level;
	if (argc == 2)
		my_Karen.complain(argv[1]);
	return (0);
}