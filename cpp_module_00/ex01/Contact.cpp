/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ien-niou <ien-niou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 19:41:49 by marvin            #+#    #+#             */
/*   Updated: 2025/06/05 18:54:32 by ien-niou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(std::string name) {
    firstName = name;
}
void Contact::setLastName(std::string name) {
    lastName = name;
}
void Contact::setNickname(std::string name) {
    nickname = name;
}
void Contact::setPhoneNumber(std::string number) {
    phoneNumber = number;
}
void Contact::setDarkestSecret(std::string secret) {
    darkestSecret = secret;
}
std::string Contact::getFirstName() {
    return firstName;
}
std::string Contact::getLastName() {
    return lastName;
}
std::string Contact::getNickname() {
    return nickname;
}
std::string Contact::getPhoneNumber() {
    return phoneNumber;
}
std::string Contact::getDarkestSecret() {
    return darkestSecret;
}

Contact::Contact()
{

}

Contact::~Contact()
{
    
}
