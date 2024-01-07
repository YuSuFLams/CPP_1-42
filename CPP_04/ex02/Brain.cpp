/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 23:11:41 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/08 15:33:09 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "\033[96mBrain\033[0m     :Default Constructor Called" << std::endl;
    for (int i = 0; i < 100; i++)
        setIdeas(i, "Ideas");
}

Brain::Brain(const Brain &cpy)
{
    std::cout << "\033[96mBrain\033[0m     :Copy Constructor Called" << std::endl;
    *this = cpy;
}

Brain &Brain::operator=(const Brain &obj)
{
    std::cout << "\033[96mBrain\033[0m     :Copy Assignment Operator Constructor" << std::endl;
    if (this != &obj) {
        for (int i = 0; i < 100; i++)
            setIdeas(i, obj.getIdeas(i));
    }
    return (*this);
}

void Brain::setIdeas(int ind, const std::string idea)
{
    if (ind > 99 || ind < 0) {
        std::cout << "This Index : " << ind << " Is Out Of Range!." << std::endl;
        return ;
    }
    this->ideas[ind] = idea;
}

Brain::~Brain()
{
    std::cout << "\033[96mBrain\033[0m     :Destructor Called" << std::endl;
}

std::string Brain::getIdeas(int ind) const
{
    if (ind > 99 || ind < 0)
    {
        std::cout << "This Index : " << ind << " Is Out Of Range!." << std::endl;
        return ("N/A");
    }
    return (this->ideas[ind]);
}