#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iomanip>
# include <iostream>
# include <vector>
# include <array>
# include <algorithm>

template <typename T>
void	easyFind(T container, int value) throw (std::out_of_range)
{
	if (std::find(container.begin(), container.end(), value) == container.end())
		std::cout << value << " has been found on " << std::endl;
	else
	{
		std::cout << "VALUE does not exist within the container boundaries." << std::endl;
	}
}

#endif