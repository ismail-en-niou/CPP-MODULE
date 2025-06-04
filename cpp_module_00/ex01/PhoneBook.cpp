#include "PhoneBook.hpp"

void    PhoneBook::set_first_name(int id ,  st str)
{
    contacts[id].setFirstName(str);
}

void    PhoneBook::set_last_name(int id , st str)
{
    contacts[id].setLastName(str);
}

void    PhoneBook::set_nick_name(int id , st str)
{
    contacts[id].setNickname(str);
}

void    PhoneBook::set_number(int id , st str)
{
    contacts[id].setPhoneNumber(str);
}

void    PhoneBook::set_darkest_secret(int id , st str)
{
    contacts[id].setDarkestSecret(str);
}

st  PhoneBook::get_first_name(int id)
{
    return contacts[id].getFirstName();
}

st  PhoneBook::get_last_name(int id)
{
    return contacts[id].getLastName();
}

st  PhoneBook::get_nick_name(int id)
{
    return contacts[id].getNickname();
}

st  PhoneBook::get_number(int id)
{
    return contacts[id].getPhoneNumber();
}

st  PhoneBook::get_darkest_secret(int id)
{
    return contacts[id].getDarkestSecret();
}

void PhoneBook::searchContacts()
{
    std::cout << "Hello in your Search" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;
    std::cout << "| Index    | FirstName| LastName | Nickname |" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;

    for (int i = 0; i < 8; i++)
    {
        if (!this->get_first_name(i).empty())
        {

            std::cout << "| " << std::setw(9) << i << "|"
            << std::setw(10) << contacts[i].getFirstName() << "|"
            << std::setw(10) << contacts[i].getLastName() << "|"
            << std::setw(10) << contacts[i].getNickname() << "|"
            << std::endl;
        }

    }
    std::cout << "|----------|----------|----------|----------|" << std::endl;
    
}


void    PhoneBook::print_contact_id(int id)
{
    std::cout << "First Name : " << this->get_first_name(id) << std::endl;
    std::cout << "Last Name: "<< this->get_last_name(id) << std::endl;
    std::cout << "Nick Name: " << this->get_nick_name(id) << std::endl;
    std::cout << "Number : " << this->get_number(id) << std::endl;
    std::cout << "Drakest Secret : " << this->get_darkest_secret(id) << std::endl;
}