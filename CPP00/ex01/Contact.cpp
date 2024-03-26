/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 20:06:47 by paula             #+#    #+#             */
/*   Updated: 2024/03/26 16:04:41 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::~Contact()
{
}

Contact::Contact()
{
}

std::string Contact::get_fname()
{
    return (m_first_name);
}

std::string Contact::get_lname()
{
    return(m_last_name);
}

std::string Contact::get_nickname()
{
    return (m_nickname);
}

std::string Contact::get_phone()
{
    return (m_phone_number);
}

std::string Contact::get_dark()
{
    return (m_darkest_secret);
}

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
{
    m_first_name = first_name;
    m_last_name = last_name;
    m_nickname = nickname;
    m_phone_number = phone_number;
    m_darkest_secret = darkest_secret;
}

void    Contact::print_details() const
{
    std::cout << "Fist name: " << m_first_name << '\n';
    std::cout << "Last name: " << m_last_name << '\n';
    std::cout << "Nickname: " << m_nickname << '\n';
    std::cout << "Phone number: " << m_phone_number << '\n';
    std::cout << "Darkest secret: " << m_darkest_secret << '\n';
}