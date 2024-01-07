/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 01:36:56 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/02 02:00:33 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    std::cout << "ScavTrap Default Constructor Called" << std::endl;
    this->HitPoint = 100;
    this->EnergyPoint = 50;
    this->AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    std::cout << "ScavTrap \e[1;34m" << this->Name << "\033[0m Constructor Called" << std::endl;
    this->HitPoint = 100;
    this->EnergyPoint = 50;
    this->AttackDamage = 20;
}
ScavTrap::ScavTrap(ScavTrap const &cpy): ClapTrap(cpy.Name)
{
    std::cout << "ScavTrap \e[1;34m" << this->Name << "\033[0m Copy Constructor Called" << std::endl;
    *this = cpy;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap \e[1;34m" << this->Name << "\033[0m Destructor Called" << std::endl;
}

ScavTrap& ScavTrap::operator = (ScavTrap const &obj)
{
    std::cout << "ScavTrap \e[1;34m" << this->Name << "\033[0m Assignment Operator Called" << std::endl;
    if (this != &obj)
    {
        setName(obj.get_Name());
        setH_Points(obj.getH_Points());
        setE_Points(obj.getE_Points());
        setA_Damage(obj.getA_Damage());
    }
    return (*this);
}

void ScavTrap::attack(const std::string& target)
{
    if (this->EnergyPoint > 0 && this->HitPoint)
    {
        std::cout << "ScavTrap \e[1;34m" << this->Name << "\033[0m\033[0m attacks \e[1;31m" << target ;
        std::cout << "\033[0m, causing \e[1;32m" << this->AttackDamage << "\033[0m points of damage!" << std::endl;
        this->EnergyPoint--;
    }
    else if (this->EnergyPoint <= 0)
    {
        std::cout << "ScavTrap \e[1;34m" << this->Name << "\033[0m\033[0m not attack " << target;
        std::cout << ", because he has no energy." << std::endl;
    }
    else if (this->HitPoint <= 0)
    {
        std::cout << "ScavTrap \e[1;34m" << this->Name << "\033[0m\033[0m not attack " << target;
        std::cout  << ", because he has no Hit Point." << std::endl;
    }
}

void ScavTrap::guardGate()
{
    if (this->HitPoint > 0 && this->EnergyPoint > 0)
        std::cout << "ScavTrap \e[1;34m" << this->Name << "\033[0m Is Now In Gate Keeper Mode!" << std::endl;
}
