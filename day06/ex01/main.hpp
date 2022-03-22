#ifndef MAIN_HPP
# define MAIN_HPP

#include <iomanip>
#include <iostream>

typedef struct s_data
{
	std::string name;
	int			amount;		
} Data;

uintptr_t	serialize(Data* ptr);
Data		*deserialize(uintptr_t raw);

# endif