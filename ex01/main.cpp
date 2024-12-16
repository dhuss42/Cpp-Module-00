/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:42:05 by dhuss             #+#    #+#             */
/*   Updated: 2024/12/16 14:42:06 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook phonebook;
	std::string cmd;

	while (1)
	{
		std::cout << "Enter command: ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			phonebook.add();
		else if (cmd == "SEARCH")
			phonebook.search(phonebook);
		else if (cmd == "EXIT")
			exit(EXIT_SUCCESS);
		else
			std::cout << "Error: Invalid command\n";
	}
}

//if(std::cin.eof() || std::cin.fail())