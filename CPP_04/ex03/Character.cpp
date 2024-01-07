/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 00:53:43 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/08 04:07:06 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character():name("N/A")
{
    for (int i = 0;i < 4; i++)
        this->inventory[i] = NULL;
}

Character::Character(const std::string &Name):name(Name)
{   
    for (int i = 0;i < 4; i++)
        this->inventory[i] = NULL;
}

Character::Character(const Character &cpy):name(cpy.getName())
{
    for (int i = 0;i < 4; i++)
        this->inventory[i] = NULL;
    *this = cpy;
}

Character &Character::operator=(const Character &obj)
{
    if (this != &obj)
    {
        this->name = obj.getName();
        for(int i = 0; i < 4; i++){
            if (this->inventory[i]  != NULL) {
                delete this->inventory[i];
                this->inventory[i] = NULL;
            }
        }
        for (int i = 0; i < 4; i++){
            if (obj.inventory[i] != NULL)
                this->inventory[i] = obj.inventory[i]->clone();
        }
    }
    return (*this);
}

Character::~Character()
{
    for(int i = 0; i < 4; i++){
        if (this->inventory[i] != NULL)
            delete this->inventory[i];
    }
}

std::string const & Character::getName() const { return (this->name);}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++){
        for (int k = 0; k < 4; k++) {
            if (this->inventory[k] == m)
                return ;
        }
        if (this->inventory[i] == NULL && m != NULL){
            this->inventory[i] = m;
            break ;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx > 3 || idx < 0)
        std::cout << "Invalid idx" << std::endl;
    else
        this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (this->inventory[idx] != NULL && idx >= 0 && idx < 4)
        this->inventory[idx]->use(target);
    else
        return ;
}