/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 22:21:29 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/07 22:30:50 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
    public:
    Cat();
    Cat(const std::string &type);
    Cat(const Cat &cpy);
    Cat &operator=(const Cat &obj);
    ~Cat();

    void makeSound( void ) const;
};

#endif 