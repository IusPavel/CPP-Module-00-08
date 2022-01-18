#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
	private:
		std::string const	name;
		bool				isSigned;
		int const			gradeToSign;
		int const			gradeToExec;
		std::string const	GradeTooHighException;
		std::string const	GradeTooLowException;
	public:
		Form(void);
		Form(std::string _name, int _gradeToSign, int _gradeToExec);
		Form(const Form & other);
		~Form(void);

		Form & operator=(const Form &other);

		std::string			getName(void) const;
		bool				getIsSigned(void) const;
		int					getGradeToSign(void) const;
		int					getGradeToExec(void) const;
		void				beSigned(Bureaucrat const & bureaucrat);
};

std::ostream & operator<<(std::ostream & os, Form & form);

#endif