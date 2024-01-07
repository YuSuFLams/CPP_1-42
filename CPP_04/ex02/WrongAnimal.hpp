/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 22:39:38 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/07 23:05:14 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <stdlib.h>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const std::string &type);
        WrongAnimal(const WrongAnimal &cpy);
        WrongAnimal &operator=(const WrongAnimal &obj);
        ~WrongAnimal();

        std::string getType( void ) const;
        void setType(std::string type);

        void makeSound( void ) const;
};

#endif