#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
    private:
        Contact contacts[8];
        int contactCount;
        int currentIndex;

    public:
        void set_first_name(int id , std::string str);
        void set_last_name(int id , std::string str);
        void set_nick_name(int id , std::string str);
        void set_number(int id , std::string str);
        void set_darkest_secret(int id , std::string str);
        void searchContacts();
        st  get_first_name(int id);
        st  get_last_name(int id);
        st  get_nick_name(int id);
        st  get_number(int id);
        st  get_darkest_secret(int id);
        void print_contact_id(int id);

};

#endif