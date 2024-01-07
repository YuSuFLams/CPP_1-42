/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 00:50:39 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/02 02:20:06 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap frag("Youssef");
    std::cout << std::endl;
    FragTrap frag1(frag);
    std::cout << std::endl;
    frag1.attack("you!.");
    std::cout << std::endl;
    frag1.takeDamage( 10 );
    std::cout << std::endl;
    frag1.beRepaired( 105 );
    std::cout << std::endl;
    frag1.takeDamage( 1210 );
    std::cout << std::endl;
    frag1.highFivesGuys();
    std::cout << std::endl;
    std::cout << "The Health Of \e[1;34m" << frag1.get_Name() << "\033[0m is \e[1;30m:";
    std::cout << frag1.getH_Points() << "\033[0m."<< std::endl; 
    std::cout << std::endl;
    return 0;
}
