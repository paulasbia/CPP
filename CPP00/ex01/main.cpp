/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 20:20:20 by paula             #+#    #+#             */
/*   Updated: 2024/03/26 13:06:19 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    welcome(void)
{
    std::cout << std::endl;
    std::cout << "Welcome to Your Awesome PhoneBook" << std::endl;
    std::cout << std::endl;
    std::cout << "------------------USAGE--------------------" << std::endl;
    std::cout << "choice ADD\t: To add a contact." << std::endl;
    std::cout << "choice SEARCH\t: To search for a contact." << std::endl;
    std::cout << "choice EXIT\t: to quite the PhoneBook." << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << std::endl;
}

int    is_valid(std::string &choice)
{
    if (choice == "ADD" || choice == "SEARCH" || choice == "EXIT")
        return 1;
    else
        return 0;
}

void    prompt_choice(std::string &choice)
{
    std::cout << "Please, select one of this options: ADD, SEARCH or EXIT: " << '\n';
    while (!is_valid(choice))
    {
        std::cout << "> ";
        std::cin >> choice;
    }
}

int main(void)
{
    PhoneBook phone_book;
    std::string choice{};
    
    welcome();
    while (1)
    {
        choice.clear();
        prompt_choice(choice);
        if(choice == "ADD")
            phone_book.add();
    }
}