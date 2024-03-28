/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 19:38:06 by paula             #+#    #+#             */
/*   Updated: 2024/03/28 08:50:26 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <sstream>
#include <cstring>
#include <string_view>
#include <limits>
#include "Contact.hpp"

class PhoneBook
{
public:
    //Constructor
    PhoneBook();
    //Destructor
    ~PhoneBook();
    
    //Methods
    void    add();
    void    search();
    void    print_sumary();
    int     getsize();

private:
    Contact m_contact[8];
    int     m_index;
};

int isnotnbr(std::string &str);
std::string trunc(std::string data);

#endif