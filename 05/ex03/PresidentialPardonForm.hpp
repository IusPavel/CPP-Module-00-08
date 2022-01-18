#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string const target;

	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string _target);
		PresidentialPardonForm(PresidentialPardonForm const & other);
		~PresidentialPardonForm(void);

		PresidentialPardonForm & operator=(PresidentialPardonForm const & other);

		virtual void	execute(Bureaucrat const & executor) const;
};
#endif