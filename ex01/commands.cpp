#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <string>

void    PhoneBook::add()
{
    Contact     new_contact;
    std::string input;

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

std::string truncate(const std::string str, size_t width)
{
    if (str.length() > width) 
    {
        return (str.substr(0, width -1) + ".");
    }
    return (str);
}

// problem with multi byte characters like äöü

bool    is_numeric(std::string str)
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

void    PhoneBook::search(PhoneBook phonebook)
{
    std::string input;
    int         index;
    Contact     contact;

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

    std::cout << "Enter a valid index: ";
    std::getline(std::cin, input);

    if (!is_numeric(input))
    {
        std::cout << "Error: Not a number\n";
        return ;
    }

    index = std::stoi(input);

    if (index >= 0 && index <= 8)
    {
        contact = phonebook.getContact(index);
        if (!contact.get_first_name().empty())
        {
            std::cout << "First name:     " << contact.get_first_name() << std::endl;
            std::cout << "Last name:      " << contact.get_last_name() << std::endl;
            std::cout << "Nickname:       " << contact.get_nickname() << std::endl;
            std::cout << "Phone number:   " << contact.get_phone_nbr() << std::endl;
            std::cout << "Darkest secret: " << contact.get_secret() << std::endl;
        }
        else
            std::cout << "Error: contact has not been created for that index\n";
    }
    else
    {
        std::cout << "Error: Not valid index\n";
        return ;
    }
}
