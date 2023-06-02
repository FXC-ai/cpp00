#include <iostream>
#include "phonebook.hpp"

int	Phonebook::_nbContacts = 0;

Phonebook::Phonebook(void)
{
	std::cout << "Phonebook constructor called" <<std::endl;
	return;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Phonebook destructor called" <<std::endl;
	return;
}

int Phonebook::get_nbContacts(void)
{
	return Phonebook::_nbContacts;
}

void Phonebook::modifyContact
(
	std::string firstName, 
	std::string lastName,
	std::string nickName,
	std::string phoneNumber,
	std::string darkestSecret
)
{
	this->tab_contact[Phonebook::_nbContacts].setFirstName(firstName);
	this->tab_contact[Phonebook::_nbContacts].setLastName(lastName);
	this->tab_contact[Phonebook::_nbContacts].setNickName(nickName);
	this->tab_contact[Phonebook::_nbContacts].setPhoneNumber(phoneNumber);
	this->tab_contact[Phonebook::_nbContacts].setDarkestSecret(darkestSecret);
	Phonebook::_nbContacts++;
}

void Phonebook::display_contact(int index)
{
	this->tab_contact[index].display();


}