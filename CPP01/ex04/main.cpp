/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 10:55:56 by paula             #+#    #+#             */
/*   Updated: 2024/04/02 13:35:11 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string_view>

void    print_error(std::string msg)
{
    std::cerr << "\033[0;31m[ERROR]\033[0m";
    std::cerr << msg << std::endl;
}

int main(int ac, char **av)
{
   // char            c;
    std::ifstream   infile;
    //std::string     str;

    if (ac != 4 || !av[1][0] || !av[2][0])
    {
        print_error("Invalid args: use ./sad_is_for_losers <file> <old_word> <new_word>");
		return (1);
    }
    infile.open(av[1]);
    if(infile.fail())
    {
        print_error("No such file or directory");
		return (1);
    }
}