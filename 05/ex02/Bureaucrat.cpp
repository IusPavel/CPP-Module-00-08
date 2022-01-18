#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const _name, int _grade) :
	name(_name),
	grade(_grade),
	GradeTooHighException("Bureaucrat " + _name + " has too high grade!"),
	GradeTooLowException("Bureaucrat " + _name + " has too low grade!")
{
	std::cout << "Borning new bureaucrat: " << name << std::endl;
	if (_grade < 1)
		throw GradeTooHighException;
	else if (_grade > 150)
		throw GradeTooLowException;
}

Bureaucrat::Bureaucrat(void) :
	name("Unnamed"),
	grade(150),
	GradeTooHighException("Bureaucrat Unnamed has too high grade!"),
	GradeTooLowException("Bureaucrat Unnamed has too low grade!")
{
	std::cout << "Borning new bureaucrat: " << name << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat & other) :
	name(other.name),
	grade(other.grade),
	GradeTooHighException("Bureaucrat " + other.name + " has too high grade!"),
	GradeTooLowException("Bureaucrat " + other.name + " has too low grade!")
{
std::cout << "Copying new bureaucrat: " << name << std::endl;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &)
{
	std::cout << "What can I do?" << std::endl;
	return *this;
}

std::string Bureaucrat::getName(void) const
{
	return name;
}

int		Bureaucrat::getGrade(void) const
{
	return grade;
}

void	Bureaucrat::upGrade(void)
{
	std::cout << "Time to upGrade" << std::endl;
	if (grade - 1 < 1)
		throw GradeTooHighException;
	--grade;
}

void	Bureaucrat::downGrade(void)
{
	std::cout << "Time to downGrade" << std::endl;
	if (grade + 1 > 150)
		throw GradeTooLowException;
	++grade;
}

void		Bureaucrat::signForm(Form & form) const
{
	if (form.getIsSigned())
		std::cout << name << " signs " << form.getName() << std::endl;
	else
		std::cout << name << " cannot sign " << form.getName()
		<< " because bureaucrat's grade is too low" << std::endl;
}

void		Bureaucrat::executeForm(Form const & form) const
{
	if (!form.getIsSigned())
		std::cout << "Bureaucrat " << name << " cannot execute form "
			<< form.getName() << " while it's not signed" << std::endl;
	else if (form.getGradeToExec() < grade)
		std::cout << "Bureaucrat " << name << " cannot execute form "
			<< form.getName() << ": not enough bureaucrat's grade" << std::endl;
	else
		std::cout << name << " executes " << form.getName() << std::endl;
}

std::ostream & operator<<(std::ostream & os, Bureaucrat & bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return os;
}