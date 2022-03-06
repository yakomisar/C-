#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : Form(name, "Shrubbery Creation Form", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form(other)
{
	std::cout << "Конструктор копирования" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm  &other)
{
		if (this != &other)
		{
			std::cout << "Перегруженный оператор присваивания" << std::endl;
			this->operator=(other);
		}
		else
		{
			std::cout << "Самоприсваивание" << std::endl;
		}
		return (*this);
}

void	ShrubberyCreationForm::checkExec(const Bureaucrat &executor) const
{
	this->execute(executor);
	std::ofstream outfile(this->getName() + "_shrubbery");
	outfile << "oxoxoo    ooxoo"<< std::endl;
  outfile <<"ooxoxo oo  oxoxooo"<< std::endl;
 outfile <<"oooo xxoxoo ooo ooox"<< std::endl;
 outfile <<"oxo o oxoxo  xoxxoxo"<< std::endl;
  outfile <<"oxo xooxoooo o ooo"<< std::endl;
    outfile <<"     ooooo  /o/o"<< std::endl;
         outfile <<"     / /"<< std::endl;
         outfile <<"     |   /"<< std::endl;
         outfile <<"     |  |"<< std::endl;
         outfile <<"     | D|"<< std::endl;
         outfile <<"     |  |"<< std::endl;
         outfile <<"     |  |"<< std::endl;
  outfile <<"      ______/_______"<< std::endl;
outfile << std::endl;

     outfile <<"   ccee88oo"<< std::endl;
  outfile <<"C8O8O8Q8PoOb o8oo"<< std::endl;
 outfile <<"dOB69QO8PdUOpugoO9bD"<< std::endl;
outfile <<"CgggbU8OU qOp qOdoUOdcb"<< std::endl;
    outfile <<"6OuU  /p u gcoUodpP"<< std::endl;
      outfile <<"     //////douUP"<< std::endl;
        outfile <<"   ////"<< std::endl;
         outfile <<"   |||/"<< std::endl;
         outfile <<"   |||"<< std::endl;
         outfile <<"   |||||"<< std::endl;
   outfile <<"     .....//||||...." << std::endl;
	outfile.close();
}

std::ostream &operator<<(std::ostream &output, ShrubberyCreationForm const &other)
{
	output << other.getName() << ", ShrubberyCreationForm is signed: " << other.getStatus() << ", grade to sign: " << other.get_grade_to_sign() << ", grade to exec: " << other.get_grade_to_exec();
	return (output);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}