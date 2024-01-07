/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:35:34 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/10/25 18:47:04 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **str)
{
    if (ac != 2)
    {
        std::cout << "\033[1;31mWrong Arguments\033[0m" << std::endl;
        return (1);
    }
    std::string input;
    Harl harl;

    input = str[1];
    harl.complain(input);  
    return (0);
}