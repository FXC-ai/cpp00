#include <iostream>
#include <iomanip>
#include "phonebook.hpp"

int	Phonebook::_nbContacts = 0;
int	Phonebook::_totalContacts = 0;

Phonebook::Phonebook(void)
{
	return;
}

Phonebook::~Phonebook(void)
{
	return;
}

int Phonebook::get_nbContacts(void)
{
	return Phonebook::_nbContacts;
}

int Phonebook::get_totalContacts(void)
{
	return Phonebook::_totalContacts;
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
	Phonebook::_nbContacts %= 8;
	Phonebook::_totalContacts++;
}

void Phonebook::display_list(void)
{
	int i;

	std::cout << "Index     |First Name|Last Name |NickName  |" << std::endl;

	for (i =0; i < 8; i++)
	{
		std::cout << std::setw(10) << std::setfill(' ') << std::right << i << "|";
		this->tab_contact[i].display_short();
	}
}

void Phonebook::display_contact(int index)
{
	this->tab_contact[index].display();
}