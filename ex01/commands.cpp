#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip> //setw
#include <string>

void    PhoneBook::add()
{
    Contact     new_contact;
    std::string input;

    std::cout << "Enter your first name: ";
    std::getline(std::cin, input);
    new_contact.set_first_name(input);
    std::cout << "Enter your last name: ";
    std::getline(std::cin, input);
    new_contact.set_last_name(input);
    std::cout << "Enter your nickname: ";
    std::getline(std::cin, input);
    new_contact.set_nickname(input);
    std::cout << "Enter your phone number: ";
    std::getline(std::cin, input);
    new_contact.set_phone_nbr(input);
    std::cout << "Enter your darkest secret: ";
    std::getline(std::cin, input);
    new_contact.set_secret(input);

    contacts[contact_count % 8] = new_contact;
    contact_count++;
}
// no empty contacts
// problem when add is followed by other characters

void    PhoneBook::search(PhoneBook phonebook)
{
    std::string input;
    int         index;
    Contact     contact;

    for (int i = 0; i < 8; i++)
    {
        contact = phonebook.getContact(i);
        std::cout << i << " | ";
        std::cout << std::setw(10) << std::right << contact.get_first_name() << " | ";
        std::cout << std::setw(10) << std::right << contact.get_last_name() << " | ";
        std::cout << std::setw(10) << std::right << contact.get_nickname() << " | ";
        std::cout << "\n";
    }
    // truncate

    std::cout << "enter index of contact: ";
    std::getline(std::cin, input);

    index = std::stoi(input);

    if (index >= 0 && index <= 8)
        contact = phonebook.getContact(index);
    else
    {
        std::cout << "not valid index\n";
        return ; // problem
    }
    std::cout << "first name:     " << contact.get_first_name() << std::endl;
    std::cout << "last name:      " << contact.get_last_name() << std::endl;
    std::cout << "nickname:       " << contact.get_nickname() << std::endl;
    std::cout << "phone number:   " << contact.get_phone_nbr() << std::endl;
    std::cout << "darkest secret: " << contact.get_secret() << std::endl;
}

// display saved contacts as a list of 4 columns
//  index | first name | last name | nickname 
//  column must be 10 chars wide
//  text must be right aligned
//  if text is longer than column truncate (last char must be a .)
//  prompt for index to display
//      if out of range or wrong (display behavior)
//      otherwise display contact info, one field per line