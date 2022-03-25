#include "main.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	int	random_number;
	srand(time(NULL));

	random_number = rand() % 3;
	if (random_number == 0)
		return (new A());
	else if (random_number == 1)
		return (new B());
	else if (random_number == 2)
		return (new C());
	else
		return (NULL);
}

void	identify(Base* p)
{
	if (!p)
	{
		std::cout << "p is NULL" << std::endl;
		return ;
	}
	A	*ptr_a = dynamic_cast<A *>(p);
	if (ptr_a == NULL)
		std::cout << "Not an A class" << std::endl;
	else
	{
		std::cout << "A class" << std::endl;
		return ;
	}
	B	*ptr_b = dynamic_cast<B *>(p);
	if (ptr_b == NULL)
		std::cout << "Not a B class" << std::endl;
	else
	{
		std::cout << "B class" << std::endl;
		return ;
	}
	C	*ptr_c = dynamic_cast<C *>(p);
	if (ptr_c == NULL)
		std::cout << "Not a C class" << std::endl;
	else
	{
		std::cout << "C class" << std::endl;
		return ;
	}
}

void	identify(Base& p)
{
	try
	{
		A ptr_a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Cannot cast to A" << std::endl;
	}
	try
	{
		B ptr_b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Cannot cast to B" << std::endl;
	}
	try
	{
		C ptr_c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Cannot cast to C" << std::endl;
	}
}

int	main()
{
	Base	*some = generate();
	identify(some);
	if (!some)
		return (1);
	identify(*some);
	delete some;
	return (0);
}