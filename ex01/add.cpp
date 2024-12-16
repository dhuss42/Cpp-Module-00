/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:41:44 by dhuss             #+#    #+#             */
/*   Updated: 2024/12/16 14:41:46 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <string>

void	PhoneBook::add()
{
	Contact		new_contact;
	std::string	input;

	std::cout << "Enter first name: ";
	std::getline(std::cin, input);
	if (input == "")
		return ;
	new_contact.set_first_name(input);
	std::cout << "Enter last name: ";
	std::getline(std::cin, input);
	if (input == "")
		return ;
	new_contact.set_last_name(input);
	std::cout << "Enter nickname: ";
	std::getline(std::cin, input);
	if (input == "")
		return ;
	new_contact.set_nickname(input);
	std::cout << "Enter phone number: ";
	std::getline(std::cin, input);
	if (input == "")
		return ;
	new_contact.set_phone_nbr(input);
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, input);
	if (input == "")
		return ;
	new_contact.set_secret(input);
	contacts[contact_count % 8] = new_contact;
	contact_count++;
}