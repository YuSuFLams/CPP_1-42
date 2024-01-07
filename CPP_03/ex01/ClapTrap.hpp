/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 00:17:42 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/02 02:35:13 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
    protected:
        std::string Name;
        int         HitPoint;
        int         EnergyPoint;
        int         AttackDamage;
    public:
        ClapTrap(); 
        ClapTrap(std::string name); 
        ClapTrap(const ClapTrap &cpy);
        ClapTrap &operator = (const ClapTrap &obj);  
        ~ClapTrap();

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        
        void    setName(std::string Name);
		void    setH_Points(int HitP);
		void    setE_Points(int EnrP);
		void    setA_Damage(int AttD);

        std::string get_Name( void ) const;
		int         getH_Points( void ) const;
		int         getE_Points( void ) const;
		int         getA_Damage( void ) const;
};

#endif