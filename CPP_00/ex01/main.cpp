/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 21:51:38 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/10/17 20:51:55 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
    PhoneBook PhoneBook_1;
    std::string command;

    while (true)
    {
        std::cout << "\033[1;36mPlease Entre Your Command : (ADD/EXIT/SEARCH) : \033[0m";
        std::getline(std::cin, command);
    	if (std::cin.eof())
        {
            std::cin.clear();
            clearerr(stdin);
            std::cout << std::endl;
        }
        if (command == "ADD")
            PhoneBook_1.add_command();
        else if (command == "SEARCH")
            PhoneBook_1.search_command();
        else if (command == "EXIT")
        {
            std::cout << "\033[1;31mBye My Dear Friend (See You Soon)!.\033[0m" << std::endl;
            exit (EXIT_SUCCESS);   
        }
        else
            std::cout << "Must Be Valid Command !." << std::endl;
    }
    return (0);
}
