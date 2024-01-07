/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 22:23:37 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/07 22:31:09 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "\033[93mCat\033[0m       :Default Constructor Called"<< std::endl;
}

Cat::Cat(const std::string &type)
{
    this->type = type;
    std::cout << "\033[93m" << this->type << "\033[0m       :Default Constructor Called" << std::endl;
}

Cat::Cat(const Cat &cpy): Animal(cpy)
{
    std::cout << "\033[93mCat\033[0m       :Copy Constructor Called" << std::endl;
    *this = cpy;   
}

Cat &Cat::operator=(const Cat &obj)
{
    std::cout << "\033[93mCat\033[0m       :Copy Assignment Operator Constructor" << std::endl;
    if (this != &obj)
        setType(obj.getType());
    return (*this);
}

Cat::~Cat()
{
    std::cout << "\033[93mCat\033[0m       :Destructor Called" << std::endl;
}

void Cat::makeSound( void ) const
{
    std::cout << "\033[93mCat\033[0m       :sound: Meow..  Meow..!" << std::endl;
}
