/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 19:38:06 by paula             #+#    #+#             */
/*   Updated: 2024/03/26 13:40:13 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <cstring>
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
   // void    search();

private:
    Contact m_contact[8];
    int     m_index;
};

#endif