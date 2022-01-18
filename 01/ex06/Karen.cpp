#include "Karen.hpp"

void	Karen::debug(void)
{
	std::cout << "[ DEBUG ]\n" << "I love to get extra bacon for my "
		<< "7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!"
		<< std::endl;
}

void	Karen::info(void)
{
	std::cout << "[ INFO ]\n" << "I cannot believe adding extra bacon cost more money. "
		<< "You don’t put enough! If you did I would not have to ask for it!"
		<< std::endl;
}

void	Karen::warning(void)
{
	std::cout << "[ WARNING ]\n" << "WARNING: I think I deserve to have some extra bacon for free. "
		<< "I’ve been coming here for years and you just started working here last month."
		<< std::endl;
}

void	Karen::error(void)
{
	std::cout << "[ ERROR ]\n" << "ERROR: This is unacceptable, I want to speak to the manager now."
		<< std::endl;
}

Karen::Karen(void) {}

Karen::~Karen(void) {}

void	Karen::complain(std::string level)
{
	int	i = -1;
	void	(Karen::*fptr[])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	bool	input[] = {level == "DEBUG", level == "INFO", level == "WARNING", level == "ERROR"};
	while (++i < 4)
		if (input[i])
			break ;
	switch (i)
	{
	case 0:
	case 1:
	case 2:
	case 3:
		(this->*fptr[i])();
		break ;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
