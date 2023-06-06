/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoindre <fcoindre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 11:44:18 by fcoindre          #+#    #+#             */
/*   Updated: 2023/06/06 11:44:25 by fcoindre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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