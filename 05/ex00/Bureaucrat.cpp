#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const _name, int _grade) :
	name(_name),
	grade(_grade),
	GradeTooHighException("Bureaucrat " + _name + " has too high grade!"),
	GradeTooLowException("Bureaucrat " + _name + " has too low grade!")
{
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
}

Bureaucrat::Bureaucrat(const Bureaucrat & other) :
	name(other.name),
	grade(other.grade),
	GradeTooHighException("Bureaucrat " + other.name + " has too high grade!"),
	GradeTooLowException("Bureaucrat " + other.name + " has too low grade!")
{
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &)
{
	std::cout << "What can I do?" << std::endl;
	return *this;
}

std::string Bureaucrat::getName(void)
{
	return name;
}

int		Bureaucrat::getGrade(void)
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

std::ostream & operator<<(std::ostream & os, Bureaucrat & bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return os;
}