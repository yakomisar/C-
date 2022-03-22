#include "main.hpp"

uintptr_t	serialize(Data* ptr)
{
	uintptr_t serialization = reinterpret_cast<uintptr_t>(ptr);
	return (serialization);
}

Data	*deserialize(uintptr_t raw)
{
	Data	*data = reinterpret_cast<Data *>(raw);
	return (data);
}

int	main()
{
	Data *example;

	example = new Data;
	example->name = "Oleg";
	example->amount = 500000;
	std::cout << "Data before serialization" << std::endl;
	std::cout << "Name: " << example->name << std::endl;
	std::cout << "Amount: " << example->amount << std::endl;

	std::cout << "Serialization in process..." << std::endl;
	uintptr_t	pointer = serialize(example);
	std::cout << "Address: " << &pointer << std::endl;
	std::cout << "Data: " << pointer << std::endl;

	std::cout << "Deserialization in process..." << std::endl;
	example = deserialize(pointer);
	std::cout << "Data after deserialization" << std::endl;
	std::cout << "Name: " << example->name << std::endl;
	std::cout << "Amount: " << example->amount << std::endl;

	delete example;	
	return (0);
}