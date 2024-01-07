/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 02:06:57 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/02 21:11:04 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap()
{
    std::cout << "FragTrap Default Constructor Called" << std::endl;
    this->HitPoint = 100;
    this->EnergyPoint = 100;
    this->AttackDamage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap \e[1;34m" << this->Name << "\033[0m Destructor Called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    std::cout << "FragTrap \e[1;34m" << this->Name << "\033[0m Constructor Called" << std::endl;
    this->HitPoint = 100;
    this->EnergyPoint = 100;
    this->AttackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &cpy): ClapTrap(cpy.Name)
{
    std::cout << "FragTrap \e[1;34m" << this->Name << "\033[0m Copy Constructor Called" << std::endl;
    *this = cpy;
}

FragTrap& FragTrap::operator = (FragTrap const &obj)
{
    std::cout << "FragTrap \e[1;34m" << this->Name << "\033[0m Assignment Operator Called" << std::endl;
    if (this != &obj)
    {
        setName(obj.get_Name());
        setH_Points(obj.getH_Points());
        setE_Points(obj.getE_Points());
        setA_Damage(obj.getA_Damage());
    }
    return (*this);
}

void FragTrap::attack(const std::string& target)
{
    if (this->EnergyPoint > 0 && this->HitPoint)
    {
        std::cout << "FragTrap \e[1;34m" << this->Name << "\033[0m\033[0m attacks \e[1;31m" << target ;
        std::cout << "\033[0m, causing \e[1;32m" << this->AttackDamage << "\033[0m points of damage!" << std::endl;
        this->EnergyPoint--;
    }
    else if (this->EnergyPoint <= 0)
    {
        std::cout << "FragTrap \e[1;34m" << this->Name << "\033[0m\033[0m not attack " << target;
        std::cout << ", because he has no energy." << std::endl;
    }
    else if (this->HitPoint <= 0)
    {
        std::cout << "FragTrap \e[1;34m" << this->Name << "\033[0m\033[0m not attack " << target;
        std::cout  << ", because he has no Hit Point." << std::endl;
    }
}

void FragTrap::highFivesGuys()
{
    if (this->HitPoint > 0 && this->EnergyPoint)
        std::cout << "FragTrap \e[1;34m" << this->Name << "\033[0m Request High Fives !." << std::endl;
}