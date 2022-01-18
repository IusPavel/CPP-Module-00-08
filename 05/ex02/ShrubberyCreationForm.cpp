#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("shrubbery creation", 145, 137),
	target("Default PresidentialPardonForm target")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target) : Form("shrubbery creation", 145, 137),
	target(_target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & other) :
	Form(other.getName(), other.getGradeToSign(), other.getGradeToExec()),
	target(other.target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const &)
{
	std::cout << "What can I do?.." << std::endl;
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	executor.executeForm(*this);
	if (!this->getIsSigned())
		throw "Error: Form not signed!";
	if (this->getGradeToExec() < executor.getGrade())
		throw (std::string)"Error: executor don't have needed grade!";
	std::ofstream ofs(target + "_shrubbery");
	ofs << "   |\n";
	ofs << "  /|\\\n";
	ofs << " / | \\\n";
	ofs << "  /|\\\n";
	ofs << " / | \\\n";
	ofs << "   |";
	ofs.close();

}