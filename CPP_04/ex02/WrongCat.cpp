/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 22:53:52 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/08 03:33:19 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "\033[90mWrongCat\033[0m          :Default Constructor Called"<< std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const std::string &type)
{
    this->type = type;
    std::cout << "\033[96m" << this->type<< "\033[0m       :Default Constructor Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cpy): WrongAnimal(cpy)
{
    std::cout << "\033[90mWrongCat\033[0m          :Copy Constructor Called" << std::endl;
    *this = cpy;
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
    std::cout << "\033[90mWrongCat\033[0m          :Copy Assignment Operator Constructor" << std::endl;
    if (this != &obj)
        setType(obj.getType());
    return (*this);
}
        
WrongCat::~WrongCat()
{
    std::cout << "\033[90mWrongCat\033[0m          :Destructor Called" << std::endl;
}

void WrongCat::makeSound( void ) const
{
    std::cout << "\033[90mWrongCat\033[0m          :sound!." << std::endl;
}