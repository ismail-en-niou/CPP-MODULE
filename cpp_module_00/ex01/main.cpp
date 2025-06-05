/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 19:42:21 by marvin            #+#    #+#             */
/*   Updated: 2025/06/01 19:42:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"


#define FN_MSG "Enter First Name : "
#define LN_MSG "Enter Last Name : "
#define NN_MSG "Enter Nickname : "
#define PH_MSG "Enter Phone Number : "
#define DS_MSG "Enter Darkest Secret : "

st input_getter(st str)
{
    st input;
    std::cout << str << std::endl;
    std::cin >> input;
    return input;
}

int main()
{
    std::cout << "Welcome to the PhoneBook!" << std::endl;
    PhoneBook phone;
    int i = 0;
    while (1337)
    {
        std::cout << "Please enter a command (ADD, SEARCH, EXIT): ";
        std::string command;
        std::cin >> command;
        if (std::cin.eof())
        {
            std::cout << "\nExiting PhoneBook..." << std::endl;
            break;
        }
        if (command == "ADD")
        {
            if (i > 7)
                i = 0;
            phone.set_first_name(i,input_getter(FN_MSG));
            phone.set_last_name(i,input_getter(LN_MSG));
            phone.set_nick_name(i , input_getter(NN_MSG));
            phone.set_number(i , input_getter(PH_MSG));
            phone.set_darkest_secret(i , input_getter(DS_MSG));
        }
        if (command == "SEARCH")
            phone.searchContacts();
    }
    return 0;
}
