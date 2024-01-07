/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:12:46 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/08 03:19:58 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal():type("Animal")
{
    std::cout << "\033[91mAAnimal\033[0m   :Default Constructor Called" << std::endl;
}

AAnimal::AAnimal(const std::string &type):type(type)
{
    std::cout << "\033[91mAAnimal\033[0m   :Default Constructor Called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &cpy)
{
    std::cout << "\033[91mAAnimal\033[0m   :Copy Constructor Called" << std::endl;
    *this = cpy;
}

AAnimal  &AAnimal::operator=(AAnimal const &obj)
{
    std::cout << "\033[91mAAnimal\033[0m   :Copy Assignment Operator Constructor" << std::endl;
    if (this != &obj)
        setType(obj.getType());
    return (*this);
}

AAnimal::~AAnimal()
{
    std::cout << "\033[91mAAnimal\033[0m   :Destructor Called" << std::endl;
}

std::string AAnimal::getType() const
{
    return (this->type);
}

void    AAnimal::setType(std::string type)
{
    this->type = type;
}

void    AAnimal::makeSound() const
{
    std::cout << "\033[91mAAnimal\033[0m Sound Called!." << std::endl;    
}
