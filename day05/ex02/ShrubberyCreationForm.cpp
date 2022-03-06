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
	outfile << ""
	"oxoxoo    ooxoo"
  "ooxoxo oo  oxoxooo"
 "oooo xxoxoo ooo ooox"
 "oxo o oxoxo  xoxxoxo"
  "oxo xooxoooo o ooo"
    "ooooo  /o/o"
         "/ /"
         "|   /"
         "|  |"
         "| D|"
         "|  |"
         "|  |"
  "______/_______"


     "ccee88oo"
  "C8O8O8Q8PoOb o8oo"
 "dOB69QO8PdUOpugoO9bD"
"CgggbU8OU qOp qOdoUOdcb"
    "6OuU  /p u gcoUodpP"
      "//////douUP"
        "////"
         "|||/"
         "|||"
         "|||||"
   ".....//||||...." << std::endl;
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