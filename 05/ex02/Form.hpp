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
		virtual ~Form(void);

		Form & operator=(const Form &other);

		virtual std::string		getName(void) const;
		virtual bool			getIsSigned(void) const;
		virtual int				getGradeToSign(void) const;
		virtual int				getGradeToExec(void) const;
		virtual void			beSigned(Bureaucrat const & signer);
		virtual void			execute(Bureaucrat const & executor) const = 0;
};

std::ostream & operator<<(std::ostream & os, Form & form);

#endif