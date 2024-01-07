/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 00:40:26 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/08 00:49:21 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(): type("N/A"){}

AMateria::AMateria(const std::string &type): type(type){}

AMateria::AMateria(const AMateria &cpy){*this = cpy;}

AMateria &AMateria::operator=(const AMateria &obj)
{
    if (this != &obj)
        this->type = obj.getType();
    return (*this);
}

AMateria::~AMateria(){}

std::string const &AMateria::getType( void ) const { return (this->type);}

void AMateria::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}