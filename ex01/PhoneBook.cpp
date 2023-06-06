/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <fcoindre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 11:41:15 by fcoindre          #+#    #+#             */
/*   Updated: 2023/06/06 11:41:20 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	PhoneBook::_nbContacts = 0;
int	PhoneBook::_totalContacts = 0;

PhoneBook::PhoneBook(void)
{
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

int PhoneBook::get_nbContacts(void)
{
	return PhoneBook::_nbContacts;
}

int PhoneBook::get_totalContacts(void)
{
	return PhoneBook::_totalContacts;
}

void PhoneBook::modifyContact
(
	std::string firstName, 
	std::string lastName,
	std::string nickName,
	std::string phoneNumber,
	std::string darkestSecret
)
{
	this->tab_contact[PhoneBook::_nbContacts].setFirstName(firstName);
	this->tab_contact[PhoneBook::_nbContacts].setLastName(lastName);
	this->tab_contact[PhoneBook::_nbContacts].setNickName(nickName);
	this->tab_contact[PhoneBook::_nbContacts].setPhoneNumber(phoneNumber);
	this->tab_contact[PhoneBook::_nbContacts].setDarkestSecret(darkestSecret);
	PhoneBook::_nbContacts++;
	PhoneBook::_nbContacts %= 8;
	if (PhoneBook::_totalContacts < 8)
	{
		PhoneBook::_totalContacts++;
	}
}

void PhoneBook::display_list(void)
{
	int i;

	std::cout << "Index     |First Name|Last Name |NickName  |" << std::endl;

	for (i = 0; i < PhoneBook::_totalContacts; i++)
	{
		std::cout << std::setw(10) << std::setfill(' ') << std::right << i << "|";
		this->tab_contact[i].display_short();
	}
}

void PhoneBook::display_contact(int index)
{
	this->tab_contact[index].display();
}