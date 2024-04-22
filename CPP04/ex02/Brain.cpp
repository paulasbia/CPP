/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-souz <pde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:04:47 by paula             #+#    #+#             */
/*   Updated: 2024/04/22 09:54:08 by pde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{ 
    std::cout << "Brain default constructor was called" << std::endl << END;
    setIdeas("");
}

Brain::Brain(const Brain& copy)
{
    std::cout << "Brain copy constructor called" << std::endl << END;
    //*this = copy;
    for(int i = 0; i < 100 ; i++)
        ideas[i] =  copy.ideas[i];
}

Brain   &Brain::operator=(const Brain& copy)
{
    std::cout << "Brain copy assignment operator called" << std::endl << END;
    if(this == &copy)
        return *this;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = copy.ideas[i];
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain default destructor" << std::endl << END;
}

const std::string      *Brain::getIdeas() const
{
    return ideas;
}

void    Brain::setIdeas(std::string idea)
{
    if (idea.empty())
        idea = "zzzzzzz...zzzzzzz";
    for (int i = 0; i < 100; i++)
        ideas[i] = idea;
}
