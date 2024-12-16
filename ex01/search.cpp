/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:10:26 by dhuss             #+#    #+#             */
/*   Updated: 2024/12/16 14:10:29 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <string>

std::string truncate(const std::string str, size_t width)
{
	if (str.length() > width)
	{
		return (str.substr(0, width -1) + ".");
	}
	return (str);
}

bool	is_numeric(std::string str)
{
		size_t i;

		i = 0;
		while (i < str.size())
		{
			if (!std::isdigit(str[i]))
				return (false);
			i++;
		}
	return (true);
}

void	PhoneBook::print_contacts(PhoneBook phonebook)
{
	Contact contact;

	for (int i = 0; i < 8; i++)
	{
		contact = phonebook.getContact(i);
		if (contact.get_first_name().empty())
			continue;
		std::cout << std::setw(10) << std::right << i << "|";
		std::cout << std::setw(10) << std::right << truncate(contact.get_first_name(), 10) << "|";
		std::cout << std::setw(10) << std::right << truncate(contact.get_last_name(), 10) << "|";
		std::cout << std::setw(10) << std::right << truncate(contact.get_nickname(), 10) << "|";
		std::cout << "\n";
	}
}

void	PhoneBook::retrive_contact(PhoneBook phonebook, int index)
{
	Contact	 contact;

	if (index >= 0 && index <= 8)
	{
		contact = phonebook.getContact(index);
		if (!contact.get_first_name().empty())
		{
			std::cout << "First name:	 " << contact.get_first_name() << std::endl;
			std::cout << "Last name:	  " << contact.get_last_name() << std::endl;
			std::cout << "Nickname:	   " << contact.get_nickname() << std::endl;
			std::cout << "Phone number:   " << contact.get_phone_nbr() << std::endl;
			std::cout << "Darkest secret: " << contact.get_secret() << std::endl;
		}
		else
			std::cout << "Error: contact has not been created for that index\n";
	}
	else
		std::cout << "Error: Not valid index\n";
}

void	PhoneBook::search(PhoneBook phonebook)
{
	std::string input;
	int		 index;

	print_contacts(phonebook);
	std::cout << "Enter a valid index: ";
	std::getline(std::cin, input);
	if (!is_numeric(input))
	{
		std::cout << "Error: Not a number\n";
		return ;
	}
	index = std::stoi(input);
	retrive_contact(phonebook, index);
}
