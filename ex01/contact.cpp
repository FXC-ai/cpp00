#include "contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact(void)
{
	std::cout << "Contact created" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	std::cout << "Contact Destructor called" <<std::endl;
	return;
}

void	Contact::setFirstName(std::string firstName)
{
	this->_firstName = firstName;
}

void	Contact::setLastName(std::string lastName)
{
	this->_lastName = lastName;
}

void	Contact::setNickName(std::string nickName)
{
	this->_nickName = nickName;
}

void	Contact::setPhoneNumber(std::string phoneNumber)
{
	this->_phoneNumber = phoneNumber;
}

void	Contact::setDarkestSecret(std::string darkestSecret)
{
	this->_darkestSecret = darkestSecret;
}


std::string	Contact::getFirstName(void)
{
	return this->_firstName;
}

std::string	Contact::getLastName(void)
{
	return this->_lastName;
}

std::string	Contact::getNickName(void)
{
	return this->_nickName;
}

std::string	Contact::getPhoneNumber(void)
{
	return this->_phoneNumber;
}

std::string	Contact::getDarkestSecret(void)
{
	return this->_darkestSecret;
}

void Contact::display_short(void)
{
	if (this->_firstName.length() > 10)
	{			
		std::cout << std::setw(10) << std::setfill(' ') << std::right << this->_firstName.substr(0,9) + "." << "|";
	}
	else
	{
		std::cout << std::setw(10) << std::setfill(' ') << std::right << this->_firstName << "|";
	}
	
	if (this->_lastName.length() > 10)
	{			
		std::cout << std::setw(10) << std::setfill(' ') << std::right << this->_lastName.substr(0,9) + "." << "|";
	}
	else
	{
		std::cout << std::setw(10) << std::setfill(' ') << std::right << this->_lastName << "|";
	}

	if (this->_nickName.length() > 10)
	{			
		std::cout << std::setw(10) << std::setfill(' ') << std::right << this->_nickName.substr(0,9) + "." << "|" <<std::endl;
	}
	else
	{
		std::cout << std::setw(10) << std::setfill(' ') << std::right << this->_nickName << "|" <<std::endl;
	}

	//std::cout << std::setw(10) << std::setfill(' ') << std::right <<  << " | 	";
}

void Contact::display(void)
{
	std::cout << "    First Name : " << this->_firstName << std::endl;
	std::cout << "     Last Name : " << this->_lastName << std::endl;
	std::cout << "      NickName : " << this->_nickName << std::endl;
	std::cout << "  Phone Number : " << this->_phoneNumber << std::endl;
	std::cout << "Darkest Secret : " << this->_darkestSecret << std::endl;
}

