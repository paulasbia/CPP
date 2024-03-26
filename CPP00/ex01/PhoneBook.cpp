/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 19:37:58 by paula             #+#    #+#             */
/*   Updated: 2024/03/26 13:44:27 by paula            ###   ########.fr       */
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

void    PhoneBook::add()
{
    std::cout << "vai add alguem...\n";
    std::string f_name;
    std::string l_name;
    std::string nick;
    std::string phone;
    std::string dark;

    std::cout << "First name: \n";
    while (f_name.empty())
        std::cin >> f_name;
    std::cout << "Last name: \n";
    while (l_name.empty())
        std::cin >> l_name;
    std::cout << "Nickname: \n";
    while (nick.empty())
        std::cin >> nick;
    std::cout << "Phone number: \n";
    while (phone.empty())
        std::cin >> phone;
    std::cout << "Darkest secret: \n";
    while (dark.empty())
        std::cin >> dark;
    Contact contact(f_name, l_name, nick, phone, dark);
    this->m_contact[m_index % 8] = contact;
    m_index++;
}