/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:40:19 by dhuss             #+#    #+#             */
/*   Updated: 2024/12/18 13:15:10 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_nbr;
		std::string darkest_secr;
	public:
		Contact() {};
	void	set_first_name(std::string input);
	void	set_last_name(std::string input);
	void	set_nickname(std::string input);
	void	set_phone_nbr(std::string input);
	void	set_secret(std::string input);
	std::string get_first_name();
	std::string get_last_name();
	std::string get_nickname();
	std::string get_phone_nbr();
	std::string get_secret();
};

#endif