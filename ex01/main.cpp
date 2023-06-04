#include "contact.hpp"
#include "phonebook.hpp"

#include <iostream>
#include <string>
#include <stdio.h>

int main ()
{
	Phonebook phonebook;
	std::string prompt;
	long int id;

	phonebook.modifyContact("CoindreauSudries", "MarcAntoineLauraAnicet", "FX", "1", "Im batman");
	phonebook.modifyContact("Coind", "Franc", "FX", "2", "Im batman");
	phonebook.modifyContact("Coind", "Franc", "FX", "3", "Im batman");
	phonebook.modifyContact("Coind", "Franc", "FX", "4", "Im batman");
	phonebook.modifyContact("Coind", "Franc", "FX", "5", "Im batman");
	/*phonebook.modifyContact("Coind", "Franc", "FX", "6", "Im batman");
	phonebook.modifyContact("Coind", "Franc", "FX", "7", "Im batman");
	phonebook.modifyContact("Coind", "Franc", "FX", "8", "Im batman");
	phonebook.modifyContact("CoindreauCoindreau", "Franc", "FX", "9", "Im batman");
	phonebook.modifyContact("CoindreauCoindreau", "Franc", "FX[poopodsfgpsdfg]", "9", "Im batman");*/

	while (42)
	{
		std::cout << "Enter ADD, SEARCH or EXIT : ";
		std::getline(std::cin, prompt);
		if (prompt == "SEARCH")
		{
			phonebook.display_list();
			std::cout << "Choose an id" << std::endl;
			while (42)
			{
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
		if (prompt == "ADD")
		{
			std::cout << "Add a contact" << std::endl;
			std::string firstName;
			std::string lastName;
			std::string nickName;
			std::string phoneNumber;
			std::string darkestSecret;

			while (42)
			{
				std::cout << "Enter first name : ";
				std::getline(std::cin, prompt);
				if (prompt.length() > 0)
				{
					firstName = prompt;
					break ;
				}
			}

			while (42)
			{
				std::cout << "Enter last name : ";
				std::getline(std::cin, prompt);
				if (prompt.length() > 0)
				{
					lastName = prompt;
					break ;
				}
			}

			while (42)
			{
				std::cout << "Enter Nickname : ";
				std::getline(std::cin, prompt);
				if (prompt.length() > 0)
				{
					nickName = prompt;
					break ;
				}
			}

			while (42)
			{
				std::cout << "Enter Phone Number : ";
				std::getline(std::cin, prompt);
				if (prompt.length() > 0)
				{
					phoneNumber = prompt;
					break ;
				}
			}

			while (42)
			{
				std::cout << "Enter darkest secret : ";
				std::getline(std::cin, prompt);
				if (prompt.length() > 0)
				{
					darkestSecret = prompt;
					break ;
				}
			}
			phonebook.modifyContact(firstName, lastName, nickName, phoneNumber, darkestSecret);

		}
		if (prompt == "EXIT")
		{
			return (0);
		}
	}



	return (0);
}