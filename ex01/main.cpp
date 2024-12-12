
#include "phonebook.h"

int main()
{
    PhoneBook phonebook;
    std::string cmd;

    while (1)
    {
        std::cout << "enter command: ";
        std::getline(std::cin, cmd);

        // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if (cmd == "ADD")
            phonebook.add();
        else if (cmd == "SEARCH")
            phonebook.search(phonebook);
        else if (cmd == "EXIT")
            exit(EXIT_SUCCESS);
        else
            std::cout << "invalid cmd" << std::endl;
    }
}
