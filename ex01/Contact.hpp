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
        void    set_first_name(std::string input) {
            first_name = input;
        }
        void    set_last_name(std::string input) {
            last_name = input;
        }
        void    set_nickname(std::string input) {
            nickname = input;
        }
        void    set_phone_nbr(std::string input) {
            phone_nbr = input;
        }
        void    set_secret(std::string input) {
            darkest_secr = input;
        }
        std::string get_first_name() {
            return (first_name);
        }
        std::string get_last_name() {
            return (last_name);
        }
        std::string get_nickname() {
            return (nickname);
        }
        std::string get_phone_nbr() {
            return (phone_nbr);
        }
        std::string get_secret() {
            return (darkest_secr);
        }

};

#endif