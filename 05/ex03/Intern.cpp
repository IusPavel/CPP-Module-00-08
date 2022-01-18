#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <string>

Intern::Intern(void) {}

Intern::Intern(const Intern &) {}

Intern::~Intern(void) {}

Intern & Intern::operator=(const Intern &) { return *this; }

Form * Intern::makeForm(std::string nameForm, std::string targetForm)
{
	std::string knownForms[] = {"robotomy request", "shrubbery creation",
		"presidential pardon"};
	int	len;
	int	subject;

	len = sizeof(knownForms) / sizeof(knownForms[0]);
	subject = 0;
	while (subject < len)
	{
		if (!nameForm.compare(knownForms[subject]))
			break ;
		subject++;
	}
	switch (subject)
	{
		case 0:
			return new RobotomyRequestForm(targetForm);
		case 1:
			return new ShrubberyCreationForm(targetForm);
		case 2:
			return new PresidentialPardonForm(targetForm);
		default:
			throw "Error: Intern can't write requested form named: " + nameForm;
	}
}

std::ostream & operator<<(std::ostream & os, const Intern &)
{
	os << "Intern";
	return os;
}