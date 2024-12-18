/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:05:05 by dhuss             #+#    #+#             */
/*   Updated: 2024/12/18 13:16:10 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <string>
#include <iostream>

void	Contact::set_first_name(std::string input)
{
	first_name = input;
}

void	Contact::set_last_name(std::string input)
{
	last_name = input;
}

void	Contact::set_nickname(std::string input)
{
	nickname = input;
}

void	Contact::set_phone_nbr(std::string input)
{
	phone_nbr = input;
}

void	Contact::set_secret(std::string input)
{
	darkest_secr = input;
}

std::string Contact::get_first_name()
{
	return (first_name);
}

std::string Contact::get_last_name()
{
	return (last_name);
}

std::string Contact::get_nickname()
{
	return (nickname);
}

std::string Contact::get_phone_nbr()
{
	return (phone_nbr);
}

std::string Contact::get_secret()
{
	return (darkest_secr);
}
