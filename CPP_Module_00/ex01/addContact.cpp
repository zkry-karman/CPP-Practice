/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addContact.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 17:45:53 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/04 19:06:40 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void    Contact::setDarkestSecret(const std::string &str) {

    this->darkestSecret = str;
}

void    Contact::setPhonenumber(const std::string &str) {

    this->phoneNumber = str;
}

void    Contact::setNickname(const std::string &str) {
    
    this->nickname = str;
}

void    Contact::setLastName(const std::string &str) {
    
    this->lastName = str;
}

void    Contact::setFirstName(const std::string &str) {
    
    this->firstName = str;
}

void    PhoneBook::AddContact() {
    
    std::string firstName = "";
    std::string lastName = "";
    std::string nickname = "";
    std::string phoneNumber = "";
    std::string darkestSecret = "";
    
    while (firstName.empty()) {
        std::cout << "Enter First Name: ";
        if (!std::getline(std::cin, firstName))
            return ;
    }
    this->contactList[this->index].setFirstName(firstName);
    
    while(lastName.empty()){
        std::cout << "Enter Last Name: ";
        if (!std::getline(std::cin, lastName))
            return ;
    }
    this->contactList[this->index].setLastName(lastName);
    
    while (nickname.empty()){
        std::cout << "Enter Nickname: ";
        if (!std::getline(std::cin, nickname))
            return ;
    }
    this->contactList[this->index].setNickname(nickname);
    
    while (phoneNumber.empty()){
        std::cout << "Enter Phone Number: ";
        if (!std::getline(std::cin, phoneNumber))
            return ;
    }
    this->contactList[this->index].setPhonenumber(phoneNumber);
    
    while(darkestSecret.empty()){
        std::cout << "Enter Darkest Secret: ";
        if (!std::getline(std::cin, darkestSecret))
            return ;
    }
    this->contactList[this->index].setDarkestSecret(darkestSecret);

    this->index = (this->index + 1) % 8;
    if (this->totalContacts < 8)
        this->totalContacts++;
}