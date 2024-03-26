/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 19:40:56 by paula             #+#    #+#             */
/*   Updated: 2024/03/26 13:00:31 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <cstring>

class Contact
{
    public:
    //constructor
        Contact();
        Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);
    //destructor
        ~Contact();

    //Methods
    //void    print_sumary() const;
    //void    print_details() const;

    private:
        std::string m_first_name;
        std::string m_last_name;
        std::string m_nickname;
        std::string m_phone_number;
        std::string m_darkest_secret;
};

#endif