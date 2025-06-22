#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

typedef std::string st;
#include <iostream>
#include <iomanip>
#include <sstream>

class PhoneBook {
    private:
        Contact contacts[8];
        void print_contact_id(int id);
        int     check_input(st str);
        int is_contact_empty(int id);

    public:
        void set_first_name(int id , st str);
        void set_last_name(int id , st str);
        void set_nick_name(int id , st str);
        void set_number(int id , st str);
        void set_darkest_secret(int id , st str);
        void searchContacts();
        st  get_first_name(int id);
        st  get_last_name(int id);
        st  get_nick_name(int id);
        st  get_number(int id);
        st  get_darkest_secret(int id);
};

#endif