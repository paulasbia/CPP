/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:59:17 by paula             #+#    #+#             */
/*   Updated: 2024/04/17 14:18:38 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGWCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal 
{
    public:
    WrongCat();
    WrongCat(const WrongCat& copy);
        
    WrongCat& operator=(const WrongCat& copy);
    virtual ~WrongCat();
        
    //Methods
    void        makeSound() const;


    };

#endif
