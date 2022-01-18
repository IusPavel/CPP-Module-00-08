#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include "Form.hpp"

class Form;
class Bureaucrat
{
	private:
		std::string const	name;
		int					grade;

		std::string const GradeTooHighException;
		std::string const GradeTooLowException;

	public:
		Bureaucrat(void);
		Bureaucrat(std::string const _name, int _grade);
		Bureaucrat(const Bureaucrat & other);
		~Bureaucrat();

		Bureaucrat & operator=(const Bureaucrat & other);

		std::string getName(void) const;
		int			getGrade(void) const;
		void		upGrade(void);
		void		downGrade(void);
		void		signForm(Form & form) const;
};

std::ostream & operator<<(std::ostream & os, Bureaucrat & bureaucrat);

#endif