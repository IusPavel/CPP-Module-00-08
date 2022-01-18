#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>

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

		std::string getName(void);
		int			getGrade(void);
		void		upGrade(void);
		void		downGrade(void);

};

std::ostream & operator<<(std::ostream & os, Bureaucrat & bureaucrat);

#endif