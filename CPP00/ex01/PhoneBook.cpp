/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 19:37:58 by paula             #+#    #+#             */
/*   Updated: 2024/03/26 15:12:04 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    m_index = 0;
}

PhoneBook::~PhoneBook()
{
}

int isnotnbr(std::string &str)
{
    int i = 0;
    while(str[i])
    {
        if(!isdigit(str[i]))
            return 1;
        i++;
    }
    return 0;
}

void    PhoneBook::add()
{
    std::cout << "vai add alguem...\n";
    std::string f_name;
    std::string l_name;
    std::string nick;
    std::string phone;
    std::string dark;

    std::cout << "First name: ";
    while (f_name.empty())
        std::getline(std::cin, f_name);
    std::cout << "Last name: ";
    while (l_name.empty())
        std::getline(std::cin, l_name);
    std::cout << "Nickname: ";
    while (nick.empty())
        std::getline(std::cin, nick);;
    while (phone.empty()) // precisa tratar para so aceitar numero
    {
        while(1)
        {
            std::cout << "Phone number: ";
            std::getline(std::cin, phone);
            if(isnotnbr(phone))
                std::cout << "invalid input, try again\n";
            else
                break;
        }
    }
    std::cout << "Darkest secret: ";
    while (dark.empty())
        std::getline(std::cin, dark);
    Contact contact(f_name, l_name, nick, phone, dark);
    this->m_contact[m_index % 8] = contact;
    m_index++;
}

void    PhoneBook::search(void)
{
    
}