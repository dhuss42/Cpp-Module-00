#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "phonebook.h"

class PhoneBook
{
    private:
        Contact contacts[8];
        int contact_count;
    public:
        PhoneBook() {
            contact_count = 0;
        }
        void add();
        void search(PhoneBook phonebook);
        Contact getContact(int index){
            return (contacts[index]);
        }
};

#endif