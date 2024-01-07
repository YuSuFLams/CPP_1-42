/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 23:45:19 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/08 00:12:30 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
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