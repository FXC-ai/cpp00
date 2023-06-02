#include "simonContact.hpp"
#include <iostream>

Contact::Contact(void)
{
	std::cout << "Contact Constructor called" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	std::cout << "Contact Destructor called" << std::endl;
	return ;
}

void	Contact::save(std::string Nom)
{
	this->_firstName = Nom;
}

void	Contact::display_contact(void)
{
	std::cout << "First name: " << this->_firstName << std::endl;
	std::cout << "Last name: " << this->_lastName << std::endl;
	std::cout << "Nick name: " << this->_nickName << std::endl;
	std::cout << "Phone Num.: " << this->_phoneNum << std::endl;
	std::cout << "Darkest Secret: " << this->_secret << std::endl;
}