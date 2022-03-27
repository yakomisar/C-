#include "easyfind.hpp"

int	main()
{
	srand(time(NULL));
	int	random_number;
	std::array<int, 100>	my_arr;
	for (size_t i = 0; i < 100; i++)
	{
		random_number = rand() % 99;
		my_arr[i] = random_number;
	}
	easyFind(my_arr, 66);
	return (0);
}