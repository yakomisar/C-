#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat	boris("Boris");
	boris.setGrade(10);
	std::cout << boris.getName() << " with grade " << boris.getGrade() << std::endl;

	try
	{
		boris.decrementGrade();
		boris.decrementGrade();
		boris.decrementGrade();
		boris.decrementGrade();
		boris.decrementGrade();
		boris.decrementGrade();
		boris.decrementGrade();
		boris.decrementGrade();
		boris.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << boris.getName() << " with grade " << boris.getGrade() << std::endl;


	try
	{
		for (int i = 0; i < 20; i++)
			boris.incrementGrade();
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << boris.getName() << " with grade " << boris.getGrade() << std::endl;
	return (0);
}