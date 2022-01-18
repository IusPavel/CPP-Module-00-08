/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: signacia <signacia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 23:26:21 by signacia          #+#    #+#             */
/*   Updated: 2021/12/15 02:47:31 by signacia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "Phonebook.hpp"

int	Phonebook::id = 0;

Phonebook::Phonebook(void)
{
}

Phonebook::~Phonebook(void)
{
	std::cout << "Application closed. All data lost" << std::endl;
}

void	Phonebook::addContact(void)
{
	int	goal;
	
	goal = Phonebook::contacts[id].setContact(id);
	if (goal)
		id = (++id == 8) ? 0 : id;
	
}

void	Phonebook::searchContact(void)
{
	std::string index;
	int			indexInt;
	std::cout << "*===========================================*" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "*===========================================*" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (contacts[i].getId() == 0)
			break;
		std::cout << "|" << std::setw(10) << contacts[i].getId();
		if (contacts[i].getFirstName().length() > 10)
			std::cout << "|" << contacts[i].getFirstName().substr(0, 9) << '.';
		else
			std::cout << "|" << std::setw(10) << contacts[i].getFirstName().substr(0, 10);
		if (contacts[i].getLastName().length() > 10)
			std::cout << "|" << contacts[i].getLastName().substr(0, 9) << '.';
		else
			std::cout << "|" << std::setw(10) << contacts[i].getLastName().substr(0, 10);
		if (contacts[i].getNickName().length() > 10)
			std::cout << "|" << contacts[i].getNickName().substr(0, 9) << ".|" << std::endl;
		else
			std::cout << "|" << std::setw(10) << contacts[i].getNickName().substr(0, 10) << "|" << std::endl;
	}
	if (contacts[0].getId() == 0)
	{
		std::cout << "\nContact list is empty" << std::endl;
	}
	else
	{
		std::cout << "*===========================================*" << std::endl;
		std::cout << "\nEnter the index to view full info: ";
		std::getline(std::cin, index);
		indexInt = atoi(index.c_str());
		if (indexInt > 0 && indexInt < 9 && contacts[indexInt - 1].getId() != 0)
			contacts[indexInt - 1].printfInfo();
		else if (std::cin.eof())
		{
			std::cin.clear();
			clearerr(stdin);
			std::cout << "\nOperation interrupted by user. Enter the new command" << std::endl;
			return ;
		}
		else
		{
			std::cout << "Wrong index. Please enter the new command again" << std::endl;
		}
	}
	
}