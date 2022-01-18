#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("presidential pardon", 25, 5),
	target("Default PresidentialPardonForm target")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target) : Form("presidential pardon", 25, 5),
	target(_target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & other) :
	Form(other.getName(), other.getGradeToSign(), other.getGradeToExec()),
	target(other.target)
{
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const &)
{
	std::cout << "What can I do?.." << std::endl;
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	executor.executeForm(*this);
	if (!this->getIsSigned())
		throw "Error: form not signed!";
	if (this->getGradeToExec() < executor.getGrade())
		throw (std::string)"Error: executor don't have needed grade!";
	std::cout << target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}