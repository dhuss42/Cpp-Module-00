/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:42:05 by dhuss             #+#    #+#             */
/*   Updated: 2024/12/18 13:21:20 by dhuss            ###   ########.fr       */
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
		if (std::cin.eof() || std::cin.fail())
		{
			std::cout << "\nInput stream closed. Exiting program.\n";
			break ;
		}
		if (cmd == "ADD")
			phonebook.add();
		else if (cmd == "SEARCH")
			phonebook.search(phonebook);
		else if (cmd == "EXIT")
			exit(EXIT_SUCCESS);
		else
			std::cout << "Error: Invalid command\n";
	}
	return (0);
}

//if(std::cin.eof() || std::cin.fail())

// When using the terminal, Ctrl+D, sends an EOF signal to the program. 
// -> no further input is expected.
// If input buffer is empty when Ctrl+D is pressed, 
// -> tells std::cin that it has reached the end of the input.

// std::cin.eof()
// checks if EOF flag has been set on the input stream.
// If Ctrl+D is pressed and std::cin detects no more data in the input stream, it sets the EOF flag.

//std::cin.fail()
// checks whether a failure occurred on the input stream.
// -> The input is not valid for the expected type (trying to convert a non-numeric string to an integer).
// -> The stream has been closed or corrupted.
// -> An EOF condition has been reached.

// std::cin.eof() indicates the stream ended (no more data).
// std::cin.fail() indicates an error occurred in reading or processing input.
