/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 20:03:54 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/10/27 17:36:20 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <fstream>

std::string replace_new(std::string str_f_file, const std::string& str1, const std::string& str2)
{
    size_t find = 0;

    while ((find = str_f_file.find(str1, find)) != std::string::npos)
    {
        str_f_file.erase(find, str1.length());
        str_f_file.insert(find, str2);
        find += str2.length();
    }

    return str_f_file;
}

int main(int ac, char **str)
{

    if (ac != 4)
    {
        std::cout << "Number Of Arguments Is Wrong !..." << std::endl;
        std::cout << "Usage: ./replace <fileName> <string1:to find> <string2:to replace>" << std::endl;
        exit (EXIT_FAILURE);
    }
    
    std::string filename = str[1];
    std::string old_s = str[2];
    std::string new_s = str[3];
    std::string line;

    if (old_s.empty() || new_s.empty())
    {
        std::cout << "ERROR :Empty arguments!!" << std::endl;
        exit (EXIT_FAILURE);
    }

    std::ifstream   old_file(filename.c_str());
    if (old_file.is_open())
    {
        filename.append(".replace");
        std::ofstream new_file(filename.c_str());
        if (!new_file.is_open())
        {
            std::cout << "Failed Or Cannot Open This File To Read!." <<std::endl;
            exit(EXIT_FAILURE);
        }
        while (getline(old_file, line))
        {
            line = replace_new(line, old_s, new_s);
            new_file << line;
            if (old_file.eof())
                break ;    
			new_file << std::endl;
        }
        old_file.close();
        new_file.close();
    }
    else
    {
        std::cout << "Failed Or Cannot Open This File To Write!." <<std::endl;
        exit (EXIT_FAILURE);
    }
    return (EXIT_SUCCESS);
}

