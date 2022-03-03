#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat putin("Putin");
	putin.setGrade(10);

	Form formA("a", 10, 10);
	Form formB("b", 10, 10);
	
	putin.signForm(formA);
	
	std::cout << formA << std::endl;
	std::cout << formB << std::endl;


	Bureaucrat peskov("Peskov");
	peskov.setGrade(140);

	peskov.signForm(formB);
	std::cout << formB << std::endl;

	return 0;
}
