#include "Form.hpp"

Form::Form(void) : name("Trash"), isSigned(false), gradeToSign(150), gradeToExec(150),
	GradeTooHighException("Error: too high one or more requirements"),
	GradeTooLowException("Error: too low one or more requirements")
{
}

Form::Form(std::string _name, int _gradeToSign, int _gradeToExec) :
	name(_name), isSigned(false), gradeToSign(_gradeToSign), gradeToExec(_gradeToExec),
	GradeTooHighException("Error: too high one or more requirements"),
	GradeTooLowException("Error: too low one or more requirements")
{
	std::cout << "Creating new form: " << _name << std::endl;
	if (gradeToSign < 1 || gradeToExec < 1)
		throw GradeTooHighException;
	else if (gradeToSign > 150 || gradeToExec > 150)
		throw GradeTooLowException;
}

Form::Form(const Form & other) : name(other.name), isSigned(other.isSigned),
	gradeToSign(other.gradeToSign), gradeToExec(other.gradeToExec),
	GradeTooHighException(other.GradeTooHighException),
	GradeTooLowException(other.GradeTooLowException)
{
	if (gradeToSign < 1 || gradeToExec < 1)
		throw GradeTooHighException;
	else if (gradeToSign > 150 || gradeToExec > 150)
		throw GradeTooLowException;
}

Form::~Form(void)
{
	std::cout << "Form destructor called" << std::endl;
}

Form & Form::operator=(const Form &other)
{
	std::cout << "What can I do?" << std::endl;
	isSigned = other.isSigned;
	return *this;
}

std::string	Form::getName(void) const
{
	return name;
}

bool	Form::getIsSigned(void) const
{
	return isSigned;
}

int		Form::getGradeToSign(void) const
{
	return gradeToSign;
}

int		Form::getGradeToExec(void) const
{
	return gradeToExec;
}

void	Form::beSigned(Bureaucrat const & bureaucrat)
{
	if (bureaucrat.getGrade() > gradeToSign)
	{
		bureaucrat.signForm(*this);
		throw GradeTooLowException;
	}
	else
	{
		isSigned = true;
		bureaucrat.signForm(*this);
	}
}

std::ostream & operator<<(std::ostream & os, Form & form)
{
	os << "Form " << form.getName() << ", grade to sign is " << form.getGradeToSign()
		<< ", grade to exec is " << form.getGradeToExec();
	if (form.getIsSigned())
		os << ", signed";
	else
		os << ", not signed";
	return os;
}