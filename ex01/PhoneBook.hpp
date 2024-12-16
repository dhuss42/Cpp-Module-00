/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:11:00 by dhuss             #+#    #+#             */
/*   Updated: 2024/12/16 14:42:55 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int contact_count;
	public:
		PhoneBook() {
			contact_count = 0;
		}
		void add();
		void search(PhoneBook phonebook);
		void print_contacts(PhoneBook PhoneBook);
		void retrive_contact(PhoneBook PhoneBook, int index);
		Contact getContact(int index){
			return (contacts[index]);
		}
};

#endif