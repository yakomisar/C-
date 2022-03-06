#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

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

	Form 	*form;
	Intern	intern;

	form = intern.makeForm("ShrubberyCreationForm", "target");
	invasion(*form, putin, peskov);
	delete form;

	return 0;
}
