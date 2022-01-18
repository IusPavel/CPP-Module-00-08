#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"

class  ShrubberyCreationForm : public Form
{
	private:
		std::string const target;

	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string _target);
		ShrubberyCreationForm(ShrubberyCreationForm const & other);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & other);

		virtual void	execute(Bureaucrat const & executor) const;
};
#endif