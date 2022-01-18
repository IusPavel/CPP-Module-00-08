#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string const target;

	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string _target);
		RobotomyRequestForm(RobotomyRequestForm const & other);
		~RobotomyRequestForm(void);

		RobotomyRequestForm & operator=(RobotomyRequestForm const & other);

		virtual void	execute(Bureaucrat const & executor) const;
};
#endif