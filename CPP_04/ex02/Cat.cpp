/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:47:51 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/08 03:11:05 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "\033[93mCat\033[0m       :Default Constructor Called"<< std::endl;
    this->type = "Cat";
    this->c_brain = new Brain();
    if (this->c_brain == NULL) {
        std::cerr << "Failed to allocate memory for a Cat." << std::endl;
        return ;
    }
    for (int i = 0; i < 100; i++)
        this->c_brain->setIdeas(i, "Caaaaaaat"); 
}

Cat::Cat(const std::string &type)
{
    this->type = type;
    std::cout << "\033[93m" << this->type << "\033[0m       :Default Constructor Called" << std::endl;
    this->c_brain = new Brain();
    if (this->c_brain == NULL) {
        std::cerr << "Failed to allocate memory for a Cat." << std::endl;
        return ;
    }
    for (int i = 0; i < 100; i++)
        this->c_brain->setIdeas(i, this->type);
}

Cat::~Cat()
{
    delete (this->c_brain);
    std::cout << "\033[93mCat\033[0m       :Destructor Called" << std::endl;
}

Cat::Cat(const Cat &cpy):AAnimal(cpy)
{
    std::cout << "\033[93mCat\033[0m       :Copy Constructor Called" << std::endl;
    this->type = cpy.type;
    this->c_brain = new Brain(*cpy.c_brain);
    if (this->c_brain == NULL) {
        std::cerr << "Failed to allocate memory for a Cat." << std::endl;        
        return ;
    }
    for (int i = 0; i < 100; i++)
            this->c_brain->setIdeas(i, cpy.c_brain->getIdeas(i));
}

Cat &Cat::operator=(const Cat &obj)
{
    std::cout << "\033[93mCat\033[0m       :Copy Assignment Operator Constructor" << std::endl;
    if (this != &obj) {
        delete obj.c_brain;
        this->type = obj.type;
        this->c_brain = new Brain(*obj.c_brain);
        if (this->c_brain == NULL) {
            std::cerr << "Failed to allocate memory for a Cat." << std::endl;        
        }
        else
            for (int i = 0; i < 100; i++)
                this->c_brain->setIdeas(i, obj.c_brain->getIdeas(i));
    }
    return (*this);
}

void Cat::makeSound( void ) const 
{
    std::cout << "\033[93mCat\033[0m sound: Meow..  Meow..!" << std::endl;
}
