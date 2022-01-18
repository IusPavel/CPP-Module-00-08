#include <iostream>
#include "Contact.hpp"

Contact::Contact()
{
	id = 0;
}

Contact::~Contact()
{
}

int	Contact::setContact(int i)
{
	Contact tmp;


	std::cout << "Enter first name: ";
	std::cin >> tmp.firstName;
	if (std::cin.eof())
	{
		std::cin.clear();
		clearerr(stdin);
		std::cout << "\nOperation interrupted by user. Contact not added" << std::endl;
		return 0;
	}
	std::cout << "Enter last name: ";
	std::cin >> tmp.lastName;
	if (std::cin.eof())
	{
		std::cin.clear();
		clearerr(stdin);
		std::cout << "\nOperation interrupted by user Contact not added" << std::endl;
		return 0;
	}
	std::cout << "Enter nickname: ";
	std::cin >> tmp.nickname;
	if (std::cin.eof())
	{
		std::cin.clear();
		clearerr(stdin);
		std::cout << "\nOperation interrupted by user Contact not added" << std::endl;
		return 0;
	}
	std::cout << "Enter phone number: ";
	std::cin >> tmp.phoneNumber;
	if (std::cin.eof())
	{
		std::cin.clear();
		clearerr(stdin);
		std::cout << "\nOperation interrupted by user Contact not added" << std::endl;
		return 0;
	}
	std::cout << "Enter darkest secret: ";
	std::cin >> tmp.darkestSecret;
	if (std::cin.eof())
	{
		std::cin.clear();
		clearerr(stdin);
		std::cout << "\nOperation interrupted by user. Contact not added" << std::endl;
		return 0;
	}
	this->id = i + 1;
	this->firstName = tmp.firstName;
	this->lastName = tmp.lastName;
	this->nickname = tmp.nickname;
	this->phoneNumber = tmp.phoneNumber;
	this->darkestSecret = tmp.darkestSecret;
	std::cin.ignore(1000, '\n');
	return 1;
}

std::string	Contact::getFirstName(void)
{
	return firstName;
}

std::string	Contact::getLastName(void)
{
	return lastName;
}

std::string	Contact::getNickName(void)
{
	return	nickname;
}

std::string	Contact::getPhoneNumber(void)
{
	return phoneNumber;
}

std::string	Contact::getDarkestSecret(void)
{
	return	darkestSecret;
}

int	Contact::getId(void)
{
	return	id;
}

void	Contact::printfInfo(void)
{
	std::cout << "first name: ";
	std::cout << getFirstName() << std::endl;
	std::cout << "last name: ";
	std::cout << getLastName() << std::endl;
	std::cout << "nickname: ";
	std::cout << getNickName() << std::endl;
	std::cout << "phone number: ";
	std::cout << getPhoneNumber() << std::endl;
	std::cout << "darkest secret: ";
	std::cout << getDarkestSecret() << std::endl;
}