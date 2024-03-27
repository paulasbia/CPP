/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 19:37:58 by paula             #+#    #+#             */
/*   Updated: 2024/03/27 18:59:08 by paula            ###   ########.fr       */
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

int PhoneBook::getsize()
{
    return(m_index > 7 ? 8 : m_index);
}

void    PhoneBook::add()
{
    std::string f_name;
    std::string l_name;
    std::string nick;
    std::string phone;
    std::string dark;

    std::cout << "First name: ";
    while (f_name.empty() && !std::cin.eof())
        std::getline(std::cin >> std::ws, f_name);
    while (l_name.empty() && !std::cin.eof())
    {
        std::cout << "Last name: ";
        std::getline(std::cin >> std::ws,  l_name);
    }
    while (nick.empty() && !std::cin.eof())
    {
        std::cout << "Nickname: ";
        std::getline(std::cin >> std::ws, nick);
    }
    while (phone.empty() && !std::cin.eof())
    {
        while(1)
        {
            std::cout << "Phone number: ";
            std::getline(std::cin >> std::ws, phone);
            if(isnotnbr(phone))
                std::cout << "invalid input, try again\n";
            else
                break;
        }
    }
    while (dark.empty() && !std::cin.eof())
    {
        std::cout << "Darkest secret: ";
        std::getline(std::cin >> std::ws, dark);
        f_name.erase(std::remove_if(f_name.begin(), f_name.end(), ::isblank), f_name.end());  
    }
    Contact contact(f_name, l_name, nick, phone, dark);
    this->m_contact[m_index % 8] = contact;
    m_index++;
}

void    PhoneBook::search(void)
{
    if (m_index == 0)
    {
        std::cout << "No contacts added yet...\n";
        return;
    }
    std::cout << "---------------- PHONBOOK CONTACTS ----------------" << std::endl;
    std::cout << std::setw(10) << std::right << "Index" << " | "
        << std::setw(10) << std::right << "First Name" << " | "
        << std::setw(10) << std::right << "Last Name" << " | "
        << std::setw(10) << std::right << "Nickname" << std::endl;
    
    int size = getsize();
    int i = 0;
    while (i < size)
    {
        std::cout << std::setw(10) << std::right << i << " | ";
        std::cout << std::setw(10) << std::right << trunc(m_contact[i].get_fname()) << " | ";
        std::cout << std::setw(10) << std::right << trunc(m_contact[i].get_lname()) << " | ";
        std::cout << std::setw(10) << std::right << trunc(m_contact[i].get_nickname()) << std::endl;
        i++;
    }
    while(!std::cin.eof())
    {
        std::cout << "Type the index of the contact you want see: " << std::endl;
        std::cout << "> ";
        int input = 0;
        std::cin >> input;
        if (std::cin.fail() || input > 7 || input < 0 || input > m_index - 1)
        {
            std::cin.clear();
            std::cout << "Sorry, we don't have this contact on our PhoneBook.\n";
            break;
        }
        m_contact[input].print_details();
        return;
    }
}