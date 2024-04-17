/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:04:47 by paula             #+#    #+#             */
/*   Updated: 2024/04/17 16:25:52 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{ 
    std::cout << "Brain default constructor was called" << std::endl << END;
}

Brain::Brain(const Brain& copy)
{
    std::cout << "Brain copy constructor called" << std::endl << END;
    //*this = copy;
    for(int i = 0; i < 100 ; i++)
        _ideas[i] =  copy._ideas[i];
}

Brain   &Brain::operator=(const Brain& copy)
{
    std::cout << "Brain copy assignment operator called" << std::endl << END;
    if(this == &copy)
        return *this;
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = copy._ideas[i];
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain default destructor" << std::endl << END;
}

const std::string      *Brain::getIdeas() const
{
    return _ideas;
}

void                Brain::setIdeas(std::string idea)
{
    if (idea.empty())
        idea = "zzzzzzz...zzzzzzz";
    for (int i = 0; i < 100; i++)
        _ideas[i] = idea;
}