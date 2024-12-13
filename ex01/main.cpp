
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
