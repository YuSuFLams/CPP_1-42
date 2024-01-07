/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 22:31:18 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/08 03:01:58 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
    private:
        Brain *c_brain;
    public:
        Dog();
        Dog(const std::string &type);
        Dog(const Dog &cpy);
        Dog &operator=(const Dog &obj);
        ~Dog();

        void makeSound( void ) const;
};

#endif 