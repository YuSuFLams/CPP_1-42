/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 00:21:38 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/02 00:45:29 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap Default Constructor Called" << std::endl;
    this->Name = "Default";
    this->HitPoint = 10;
    this->EnergyPoint = 10;
    this->AttackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &cpy)
{
    std::cout << "ClapTrap \e[1;34m" << this->Name << "\033[0m Copy Constructor Called" << std::endl;
    (*this) = cpy;   
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap \e[1;34m" << this->Name << "\033[0m Destructor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): Name(name)
{
    std::cout << "ClapTrap \e[1;34m" << this->Name << "\033[0m Constructor Called" << std::endl;
    this->HitPoint = 10;
    this->EnergyPoint = 10;
    this->AttackDamage = 0;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
    std::cout << "ClapTrap \e[1;34m" << this->Name << "\033[0m Assignment Operator Called" << std::endl;
    if (this != &obj)
    {
        setName(obj.get_Name());
        setH_Points(obj.getH_Points());
        setE_Points(obj.getE_Points());
        setA_Damage(obj.getA_Damage());
    }
    return (*this);
}

std::string ClapTrap::get_Name( void ) const
{
    return (this->Name);
}

int ClapTrap::getH_Points( void ) const
{
    return (this->HitPoint);
}

int ClapTrap::getE_Points( void ) const
{
    return (this->EnergyPoint);    
}

int ClapTrap::getA_Damage( void ) const
{
    return (this->AttackDamage);    
}

void ClapTrap::setName(std::string name)
{
    this->Name = name;
}

void ClapTrap::setH_Points(int HitP)
{
    this->HitPoint = HitP;
}

void ClapTrap::setE_Points(int EnrP)
{
    this->EnergyPoint = EnrP;
}

void ClapTrap::setA_Damage(int AttD)
{
    this->AttackDamage = AttD;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->EnergyPoint > 0 && this->HitPoint > 0)
    {
        std::cout << "ClapTrap \e[1;34m" << this->Name << "\033[0m attacks \e[1;31m" << target ;
        std::cout << "\033[0m, causing \e[1;32m" << this->AttackDamage << "\033[0m points of damage!" << std::endl;
        this->EnergyPoint--;
    }
    else if (this->EnergyPoint <= 0)
    {
        std::cout << "ClapTrap \e[1;34m" << this->Name << "\033[0m not attack " << target;
        std::cout << ", because he has no energy." << std::endl;
    }
    else if (this->HitPoint <= 0)
    {
        std::cout << "ClapTrap \e[1;34m" << this->Name << "\033[0m not attack " << target;
        std::cout  << ", because he has no Hit Point." << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->HitPoint > 0 && this->EnergyPoint > 0)
    {
        std::cout << "ClapTrap \e[1;34m" << this->Name << "\033[0m has restored \e[1;36m" << amount << "\033[0m hit points!" << std::endl;
        this->HitPoint += amount;
        this->EnergyPoint -= 1;
    }
    else if (!this->EnergyPoint)
        std::cout << "ClapTrap \e[1;34m" << this->Name << "\033[0m he has no energy!." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->HitPoint > 0 && (unsigned int)this->HitPoint > amount)
    {
        std::cout << "ClapTrap \e[1;34m" << this->Name << "\033[0m has lost \e[1;31m" << amount << "\033[0m points." << std::endl;
        this->HitPoint -= amount;
    }
    else
        std::cout << "ClapTrap \e[1;34m" << this->Name << "\033[0m is \e[1;31mdead\033[0m!." << std::endl;
}