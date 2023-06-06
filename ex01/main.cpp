/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <fcoindre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 11:44:45 by fcoindre          #+#    #+#             */
/*   Updated: 2023/06/06 11:59:54 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <string>

std::string	get_and_set_variable (std::string varName)
{
	std::string prompt;

	while (42)
	{
		std::cout << "Enter " + varName + " : " <<std::endl;
		std::getline(std::cin, prompt);
		if (prompt.length() > 0)
		{
			break ;
		}
	}

	return prompt;
}

int main (void)
{
	PhoneBook phonebook;
	std::string prompt;
	long int id;

	while (42)
	{
		std::cout << "Enter ADD, SEARCH or EXIT : " << std::endl;
		std::getline(std::cin, prompt);
		if (prompt == "SEARCH")
		{
			phonebook.display_list();
			if (phonebook.get_totalContacts() > 0)
			{	
				while (42)
				{
					std::cout << "Choose an id : " << std::endl;
					std::getline(std::cin, prompt);
					if (prompt.length() == 1 && (prompt[0] >= '0' && prompt[0] <= '7'))
					{					
						id = std::stoi(prompt);
						if (id < phonebook.get_totalContacts())
						{
							phonebook.display_contact(id);
							break ;
						}
					}
				}
			}
		}
		if (prompt == "ADD")
		{
			std::cout << "Add a contact" << std::endl;
			std::string firstName;
			std::string lastName;
			std::string nickName;
			std::string phoneNumber;
			std::string darkestSecret;

			firstName = get_and_set_variable("First Name");
			lastName = get_and_set_variable("Last Name");
			nickName = get_and_set_variable("Nickame");
			phoneNumber = get_and_set_variable("Phone Number");
			darkestSecret = get_and_set_variable("Darkest Secret");

			phonebook.modifyContact(firstName, lastName, nickName, phoneNumber, darkestSecret);

		}
		if (prompt == "EXIT")
		{
			return (0);
		}
	}

	return (0);
}