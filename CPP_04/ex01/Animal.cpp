/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 22:13:24 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/07 23:04:59 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("Animal")
{
    std::cout << "\033[95mAnimal\033[0m    :Default Constructor Called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "\033[95mAnimal\033[0m    :Destructor Called" << std::endl;
}

Animal::Animal( const std::string &type):type(type)
{
    std::cout << "\033[95m" << this->type << "\033[0m    :Default Constructor Called" << std::endl;
}

Animal::Animal( const Animal &cpy)
{
    std::cout << "\033[95mAnimal\033[0m    :Copy Constructor Called" << std::endl;
    *this = cpy;
}

Animal &Animal::operator=( const Animal &obj)
{
    std::cout << "\033[95mAnimal\033[0m    :Copy Assignment Operator Constructor" << std::endl;
    if (this != &obj)
        setType(obj.getType());
    return (*this);
}

void Animal::setType(const std::string type)
{
    this->type = type;
}

std::string Animal::getType( void ) const
{
    return (this->type);
}

void Animal::makeSound( void ) const
{
    std::cout << "\033[95mAnimal\033[0m    :Sound Called!." << std::endl;
}