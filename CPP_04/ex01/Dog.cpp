/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 23:23:01 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/08 02:44:50 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "\033[94mDog\033[0m       :Default Constructor Called"<< std::endl;
    this->type = "Dog";
    this->c_brain = new Brain();
    if (this->c_brain == NULL) {
        std::cerr << "Failed to allocate memory for a Dog." << std::endl;
        return ;
    }
    for (int i = 0; i < 100; i++)
        this->c_brain->setIdeas(i, "Doooog");
}

Dog::Dog(const std::string &type)
{
    this->type = type;
    std::cout << "\033[94m" << this->type << "\033[0m       :Default Constructor Called" << std::endl;
    this->c_brain = new Brain();
    if (this->c_brain == NULL) {
        std::cerr << "Failed to allocate memory for a Dog." << std::endl;
        return ;
    }
    for (int i = 0; i < 100; i++)
        this->c_brain->setIdeas(i, this->type);
}

Dog::~Dog()
{
    delete (this->c_brain);
    std::cout << "\033[94mDog\033[0m       :Destructor Called" << std::endl;
}

Dog::Dog(const Dog &cpy)
{
    std::cout << "\033[94mDog\033[0m       :Copy Constructor Called" << std::endl;
    this->type = cpy.type;
    this->c_brain = new Brain();
    if (this->c_brain == NULL) {
        std::cerr << "Failed to allocate memory for a Dog." << std::endl;
        return ;
    }
    for (int i = 0; i < 100; i++)
            this->c_brain->setIdeas(i, cpy.c_brain->getIdeas(i));
}

Dog &Dog::operator=( const Dog &obj)
{
    std::cout << "\033[94mDog\033[0m       :Copy Assignment Operator Constructor" << std::endl;
    if (this != &obj) {
        delete this->c_brain;
        this->type = obj.type;
        this->c_brain = new Brain(*obj.c_brain);
        if (this->c_brain == NULL) {
            std::cerr << "Failed to allocate memory for a Dog." << std::endl;
        }
        else 
            for (int i = 0; i < 100; i++)
                this->c_brain->setIdeas(i, obj.c_brain->getIdeas(i));
    }
    return (*this);
}

void Dog::makeSound( void ) const
{
    std::cout << "\033[94mDog\033[0m sound: Woof..  Woof..!" << std::endl;
}
