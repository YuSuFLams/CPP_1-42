/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 00:50:39 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/02 01:58:30 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("Youssef");
    std::cout << std::endl;
    ScavTrap scav1(scav);
    std::cout << std::endl;
    scav1.attack("Them..!");
    std::cout << std::endl;
    scav1.takeDamage(13);
    std::cout << std::endl;
    scav1.guardGate();
    std::cout << std::endl;
    scav1.beRepaired(4);
    std::cout << std::endl;
    std::cout << "The Health Of " << scav1.get_Name() << " is \e[1;30m:";
    std::cout << scav1.getH_Points() << "\033[0m."<< std::endl; 
    std::cout << std::endl;
    return 0;
}
