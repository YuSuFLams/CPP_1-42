/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 01:27:11 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/08 04:10:28 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(){this->type = "ice";}

Ice::~Ice(){}

Ice::Ice(const Ice &cpy): AMateria(cpy){*this = cpy;}

Ice &Ice::operator=(const Ice &obj)
{
    if (this != &obj)
        this->type = obj.getType();
    return (*this);
}

AMateria* Ice::clone() const { return (new Ice(*this));}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}