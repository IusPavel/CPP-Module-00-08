/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: signacia <signacia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 00:00:43 by signacia          #+#    #+#             */
/*   Updated: 2021/12/15 01:09:25 by signacia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "Phonebook.hpp"

int	main(void)
{
	std::string command;
	Phonebook book;
	
	std::cout << "\n====================PHONEBOOK====================" << std::endl;
	std::cout << "Please enter one of the following commands:\n" << std::endl;
	std::cout << "ADD - to add a new contact" << std::endl;
	std::cout << "SEARCH - to search info about a contact" << std::endl;
	std::cout << "EXIT - close the application" << std::endl;
	std::cout << "=================================================\n" << std::endl;
	while (true)
	{
		std::cout << "PhoneBook$ ";
		std::getline(std::cin, command);
		if (std::cin.eof())
		{
			std::cin.clear();
			clearerr(stdin);
			std::cout << std::endl;
			break ;
		}
		else if (command.length() == 0)
			continue;
		else if (command == "EXIT")
			exit(0);
		else if (command == "ADD")
			book.addContact();
		else if (command == "SEARCH")
			book.searchContact();
		else
		{
			std::cout << "You wrote a wrong COMMAND" << std::endl;
			std::cout << "Valid COMMANDS are:" << std::endl;
			std::cout << "=> ADD - to add a new contact" << std::endl;
			std::cout << "=> SEARCH - to search info about a contact" << std::endl;
			std::cout << "=> EXIT - close the application" << std::endl;
		}

	}
	return (0);
}