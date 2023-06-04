#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook 
{
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void		modifyContact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret);
		int			get_nbContacts(void);
		void		display_contact(int index);
		void		display_list(void);
		int			get_totalContacts(void);

	private:
		Contact 	tab_contact[8];
		static int 	_nbContacts;
		static int 	_totalContacts;
};

#endif