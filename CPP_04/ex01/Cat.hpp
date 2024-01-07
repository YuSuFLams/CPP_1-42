/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 23:45:19 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/07 23:45:20 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *c_brain;
    public:
        Cat();
        Cat(const std::string &type);
        Cat(const Cat &cpy);
        Cat &operator=(const Cat &obj);
        ~Cat();
    
        void    makeSound() const;
};

#endif