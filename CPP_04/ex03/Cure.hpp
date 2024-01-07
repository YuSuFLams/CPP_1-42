/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 01:12:58 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/08 01:19:28 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(const Cure &cpy);
        Cure& operator=(const Cure &obj);
        ~Cure();

        AMateria* clone() const;
        void use(ICharacter& target);
        
};

#endif