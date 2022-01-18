#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include "Form.hpp"

class Intern
{
	private:

	public:
		Intern(void);
		Intern(const Intern & other);
		~Intern(void);

		Intern & operator=(const Intern & other);

		Form * makeForm(std::string nameForm, std::string targetForm);
};

std::ostream & operator<<(std::ostream & os, const Intern & intern);

#endif