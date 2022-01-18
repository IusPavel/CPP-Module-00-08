#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(void) : Form("robotomy request", 72, 45),
	target("Default RobotomyRequestForm target")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target) : Form("robotomy request", 72, 45),
	target(_target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & other) :
	Form(other.getName(), other.getGradeToSign(), other.getGradeToExec()),
	target(other.target)
{
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const &)
{
	std::cout << "What can I do?.." << std::endl;
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	executor.executeForm(*this);
	if (!this->getIsSigned())
		throw "Error: Form not signed!";
	if (this->getGradeToExec() < executor.getGrade())
		throw (std::string)"Error: executor don't have needed grade!";
	srand(time(0));
	std::cout << "Drrrrrill. ";
	if (rand() % 2)
		std::cout << target << " has been successfully robotomized!";
	else
		std::cout << target << " robotomizing failed.";
	std::cout << std::endl;
}