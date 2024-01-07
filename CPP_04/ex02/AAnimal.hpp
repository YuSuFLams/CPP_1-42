/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:12:23 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/08 02:53:19 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal
{
    protected:
        std::string type;
    public:
        AAnimal();
        AAnimal(const std::string &type);
        AAnimal(const AAnimal &cpy);
        virtual ~AAnimal();
        AAnimal  &operator=(AAnimal const &obj);

        void    setType(std::string type);
        std::string getType() const;

        virtual void    makeSound() const = 0;
};

#endif