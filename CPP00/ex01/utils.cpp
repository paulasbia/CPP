/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 20:11:55 by paula             #+#    #+#             */
/*   Updated: 2024/03/27 18:59:26 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

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

std::string trunc(std::string data)
{
    if(data.size() > 10)
    {
        data = data.substr(0, 9);
        data.push_back('.');
    }
    return data;
}
