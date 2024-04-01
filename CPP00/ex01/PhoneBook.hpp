/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 19:38:06 by paula             #+#    #+#             */
/*   Updated: 2024/04/01 09:56:21 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <sstream>
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