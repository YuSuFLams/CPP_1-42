/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 00:51:10 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/08 00:53:40 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"
# include <iostream>
# include <string>

class Character: public ICharacter
{
    private:
        std::string name;
        AMateria    *inventory[4];
    public:
        Character();
        Character(const std::string &Name);
        Character(const Character &cpy);
        Character& operator=(const Character &obj);
        ~Character();
        
        std::string const & getName() const;
        
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif