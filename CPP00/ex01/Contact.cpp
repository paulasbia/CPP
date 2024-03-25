/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 20:06:47 by paula             #+#    #+#             */
/*   Updated: 2024/03/25 20:19:26 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::~Contact()
{
}

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret)
{
    m_first_name = first_name;
    m_last_name = last_name;
    m_nickname = nickname;
    m_phone_number = phone_number;
    m_darkest_secret = darkest_secret;
}