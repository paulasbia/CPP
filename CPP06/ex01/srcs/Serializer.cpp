/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulabiazotto <paulabiazotto@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:19:46 by paulabiazot       #+#    #+#             */
/*   Updated: 2024/06/19 11:02:16 by paulabiazot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"

Serializer::Serializer() 
{
	//std::cout << "Serializer default constructor was called" << std::endl << END;
}

// Copy constructor
Serializer::Serializer(Serializer const &other) 
{
	(void)other;
	//std::cout << "Serializer copy constructor was called" << std::endl << END;
}

Serializer::~Serializer() 
{
//	std::cout << "Serializer destructor was called" << std::endl << END;
}

// Operator overloads
Serializer &Serializer::operator=(Serializer const &copy)
{
//    std::cout << "Serializer assignation operator called" << std::endl << END;
	if (this == &copy)
		return (*this);
	return (*this);
}

uintptr_t Serializer::serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));
}


