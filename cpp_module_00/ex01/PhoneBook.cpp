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

int     PhoneBook::check_input(std::string str)
{
    for (int i = 0 ; str[i] ; i++)
    {
        if (!isdigit(str[i]))
        {
            std::cout << "Entrer Please A Valid Number !" << std::endl;
            return 0;
        }
    }
    return 1;
}

int PhoneBook::is_contact_empty(int id)
{
    return contacts[id].getFirstName().empty() ? 1 : 0;
}

std::string truncateField(const std::string& str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}


void PhoneBook::searchContacts()
{
    std::cout << "Hello in your Search" << std::endl;
    std::cout << "+----------+----------+----------+----------+" << std::endl;
    std::cout << "|     Index| FirstName|  LastName|  Nickname|" << std::endl;
    std::cout << "+----------+----------+----------+----------+" << std::endl;

    for (int i = 0; i < 8; i++)
    {
        if (!this->get_first_name(i).empty())
        {

            std::cout << "| " << std::setw(9) << i + 1 << "|"
            << std::setw(10) << truncateField(contacts[i].getFirstName()) << "|"
            << std::setw(10) << truncateField(contacts[i].getLastName()) << "|"
            << std::setw(10) << truncateField(contacts[i].getNickname()) << "|"
            << std::endl;
        }

    }
    std::cout << "|----------|----------|----------|----------|" << std::endl;
    if (is_contact_empty(0))
    {
        std::cout << "The Phone Book Is Empty" << std::endl;
    }
    else 
    {
        std::cout << "Give Me a Id To Search : " << std::endl;
        std::string input;
        while (std::cin >> input)
        {
            if (check_input(input))
            {
                std::stringstream ss(input);
                int id;
                ss >> id;
                if (id > 8 || id < 1 )
                    std::cout << "Invalid Id Please Put Id !" << std::endl;
                else if (is_contact_empty(id - 1))
                    std::cout << "The Contact Is Empty Put Another Id" << std::endl;
                else
                {
                    print_contact_id(id - 1);
                    break;
                }
            }
            else
                std::cout << "Invalid input. Please enter a numeric ID." << std::endl;
        }
    
    }
  
}


void    PhoneBook::print_contact_id(int id)
{
    std::cout << "First Name : " << this->get_first_name(id) << std::endl;
    std::cout << "Last Name: "<< this->get_last_name(id) << std::endl;
    std::cout << "Nick Name: " << this->get_nick_name(id) << std::endl;
    std::cout << "Number : " << this->get_number(id) << std::endl;
    std::cout << "Drakest Secret : " << this->get_darkest_secret(id) << std::endl;
}