/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 00:50:39 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/02 01:02:13 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    std::cout << std::endl;
    ClapTrap clap1("Youssef");
    std::cout << std::endl;
    clap1.attack("YOU...");
    std::cout << std::endl;
    clap1.takeDamage(3);
    std::cout << std::endl;
    clap1.beRepaired(4);
    std::cout << std::endl;
    clap1.takeDamage(33);
    std::cout << std::endl;
    std::cout << "The Health Of " << clap1.get_Name() << " is \e[1;30m:";
    std::cout << clap1.getH_Points() << "\033[0m."<< std::endl; 
    std::cout << std::endl;
    return 0;
}
