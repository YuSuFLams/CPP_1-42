/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 00:50:39 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/02 21:35:54 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    std::cout << std::endl;
    DiamondTrap diamond("Youssef");
    std::cout << std::endl;
    DiamondTrap diamond1(diamond);
    std::cout << std::endl;
    diamond1.attack("you!.");
    std::cout << std::endl;
    diamond1.whoAmI();
    std::cout << std::endl;
    diamond1.takeDamage(30);;
    std::cout << std::endl;
    diamond1.guardGate();
    std::cout << std::endl;
    diamond1.highFivesGuys();
    std::cout << std::endl;

    return 0;
}
