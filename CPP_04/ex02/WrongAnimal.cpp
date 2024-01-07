/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 22:43:00 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/07 23:05:07 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("WrongAnimal")
{
    std::cout << "\033[96mWrongAnimal\033[0m       :Default Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type): type(type)
{
    std::cout << "\033[96m" << this->type<< "\033[0m       :Default Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy)
{
    std::cout << "\033[96mWrongAnimal\033[0m       :Copy Constructor Called" << std::endl;
    *this = cpy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
    std::cout << "\033[96mWrongAnimal\033[0m       :Copy Assignment Operator Constructor" << std::endl;
    if (this != &obj)
        setType(obj.getType());
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "\033[96mWrongAnimal\033[0m       :Destructor Called" << std::endl;
}

void WrongAnimal::setType(const std::string type)
{
    this->type = type;
}

std::string WrongAnimal::getType( void ) const
{
    return (this->type);
}

void WrongAnimal::makeSound( void ) const
{
    std::cout << "\033[96mWrongAnimal\033[0m       :Sound Called!." << std::endl; 
}