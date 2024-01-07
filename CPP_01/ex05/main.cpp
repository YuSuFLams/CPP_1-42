/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:13:31 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/10/25 18:52:33 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **str)
{
    std::string input;

    if (ac != 2)
    {
        std::cout << "\033[1;31mWrong Argumenst !\033[0m" << std::endl;
        return (1);
    }
    input = str[1];
    
    std::string strs_input[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i;
    for(i = 0; i < 4; i++)
        if (!input.compare(strs_input[i]))
            break ;
    if (i == 4)
    {
        std::cout << "\033[1;36mNot Found\033[0m" << std::endl;
        return (1);
    }
    Harl harl;
    harl.complain(input);
    return (0);
}