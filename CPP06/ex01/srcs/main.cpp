/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulabiazotto <paulabiazotto@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:19:39 by paulabiazot       #+#    #+#             */
/*   Updated: 2024/06/19 11:37:35 by paulabiazot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"

int main() 
{
	Data 		data;
	Data*		deserializer;
	uintptr_t	serializer;
	
	data.data_name = "Teste 42!";
	data.data_value = 42;

	serializer = Serializer::serialize(&data);
	std::cout << "Serialized: " << serializer << std::endl;
	deserializer = Serializer::deserialize(serializer);
	
	std::cout << MAGENTA << "The data information: \n" ;
	std::cout << "ptr_data: " << &data << std::endl;
	std::cout << "str_data: " << data.data_name << std::endl;
	std::cout << "int_data: " << data.data_value << std::endl << END;

	if (deserializer == &data) {
		std::cout << GREEN << "\nSuccess!" << std::endl;
		std::cout << "\nValues:" << std::endl;
		std::cout << "ptr: " << deserializer << std::endl;
		std::cout << "str: " << deserializer->data_name << std::endl;
		std::cout << "int: " << deserializer->data_value << std::endl;

	} else {
		std::cout << RED << "Failed!" << std::endl << END;
	}

	return 0;
}

