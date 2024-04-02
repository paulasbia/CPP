/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 10:55:56 by paula             #+#    #+#             */
/*   Updated: 2024/04/02 14:14:34 by paula            ###   ########.fr       */
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

int ft_replace(char **av, std::string str)
{
    std::ofstream   outfile;
    int             position;
    
    outfile.open((std::string(av[1]) + ".replace").c_str());
    if(outfile.fail())
    {
        print_error("No such file or directory");
		return (1);
    }
    for (int i = 0; i < (int)str.size(); i++)
    {
        position = str.find(av[2], i);
		if (position != -1 && position == i)
		{
			outfile << av[3];
			i += std::string(av[2]).size() - 1;
		}
		else
			outfile << str[i];
    }
    outfile.close();
	return (0);
}

int main(int ac, char **av)
{
    char            c;
    std::ifstream   infile;
    std::string     str;

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
    while (!infile.eof() && infile >> std::noskipws >> c)
        str += c;
    infile.close();
    return(ft_replace(av, str));
}