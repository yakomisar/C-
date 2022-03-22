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
	const char	*type = typeid(*p).name();
	std::cout << type[1] << " Class" << std::endl;
}

// void	identify(Base& p)
// {

// }

int	main()
{
	Base	*some = generate();
	identify(some);
	return (0);
}