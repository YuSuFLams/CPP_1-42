/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 01:19:31 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/08 04:10:37 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(){this->type = "cure";}

Cure::~Cure(){}

Cure::Cure(const Cure &cpy): AMateria(cpy){*this = cpy;}

Cure &Cure::operator=(const Cure &obj)
{
    if (this != &obj)
        this->type = obj.getType();
    return (*this);
}

AMateria* Cure::clone() const { return (new Cure(*this));}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;    
}
