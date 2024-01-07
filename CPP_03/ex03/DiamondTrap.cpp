/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 02:37:50 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/02 21:37:09 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap()
{
    std::cout << "DiamondTrap Default Constructor Called" << std::endl;
    this->Name = "Default";
    this->HitPoint = FragTrap::HitPoint;
    this->EnergyPoint = ScavTrap::EnergyPoint;
    this->AttackDamage = FragTrap::AttackDamage;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), ScavTrap(name), FragTrap(name)
{
    this->name = name;
    this->HitPoint = FragTrap::HitPoint;
    this->EnergyPoint = ScavTrap::EnergyPoint;
    this->AttackDamage = FragTrap::AttackDamage;
    std::cout << "DiamondTrap \e[1;34m" << this->name << "\033[0m Constructor Called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap \e[1;34m" << this->name << "\033[0m Destructor Called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &cpy): ClapTrap(cpy.Name), ScavTrap(cpy.Name), FragTrap(cpy.Name)
{
    std::cout << "DiamondTrap \e[1;34m" << this->Name << "\033[0m Copy Constructor Called" << std::endl;
    *this = cpy;
}

DiamondTrap&		DiamondTrap::operator=( DiamondTrap const & obj )
{
    std::cout << "DiamondTrap \e[1;34m" << this->Name << "\033[0m Assignment Operator Called" << std::endl;
    if(this != &obj)
    {
        this->name = obj.name;
        ClapTrap::Name = obj.Name + "_clap_name";
        this->HitPoint = obj.HitPoint;
        this->EnergyPoint = obj.EnergyPoint;
        this->AttackDamage = obj.AttackDamage;
    }
    return (*this);
}

void    DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap Name: \e[1;34m" << this->name << "\033[0m , ";
	std::cout << "ClapTrap Name: \e[1;34m" << this->ClapTrap::Name << "\033[0m" << std::endl;
}

void    DiamondTrap::attack(std::string const    &target)
{
    this->ScavTrap::attack(target);
}