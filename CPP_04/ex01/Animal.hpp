/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 22:09:45 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/07 23:04:53 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const std::string &type);
        Animal(const Animal &cpy);
        Animal &operator=(const Animal &obj);
        virtual ~Animal();

        std::string getType( void ) const;
        void setType(const std::string type);
        
        virtual void makeSound( void ) const;
};

#endif 