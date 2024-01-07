/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 22:34:52 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/07 22:39:08 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "\033[94mDog\033[0m       :Default Constructor Called"<< std::endl;
}

Dog::Dog( const Dog &cpy): Animal(cpy)
{
    std::cout << "\033[94mDog\033[0m       :Copy Constructor Called" << std::endl;
    *this = cpy;
}

Dog::Dog(const std::string &type)
{
    std::cout << "\033[94m" << this->type << "\033[0m       :Default Constructor Called" << std::endl;
    this->type = type;
}

Dog &Dog::operator=(const Dog &obj)
{
    std::cout << "\033[94mDog\033[0m       :Copy Assignment Operator Constructor" << std::endl;
    if (this != &obj)
        setType(obj.getType());
    return (*this);
}

Dog::~Dog()
{
    std::cout << "\033[94mDog\033[0m       :Destructor Called" << std::endl;
}

void Dog::makeSound( void ) const
{
    std::cout << "\033[94mDog\033[0m       :sound: Woof..  Woof..!" << std::endl;
}