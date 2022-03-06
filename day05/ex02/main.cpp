#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

void	invasion(Form &form, Bureaucrat &putin, Bureaucrat &peskov)
{
	peskov.signForm(form);
	putin.executeForm(form);
	putin.signForm(form);
	peskov.executeForm(form);
	putin.executeForm(form);
}
int main()
{
	Bureaucrat putin("Putin");
	putin.setGrade(10);

	Bureaucrat peskov("Peskov");
	peskov.setGrade(149);

	ShrubberyCreationForm form1("target");
	RobotomyRequestForm form2("target");
	PresidentialPardonForm form3("target");

	invasion(form1, putin, peskov);
	invasion(form2, putin, peskov);
	invasion(form3, putin, peskov);

	return 0;
}
