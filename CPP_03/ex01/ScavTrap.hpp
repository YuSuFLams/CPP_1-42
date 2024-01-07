/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 01:36:53 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/02 02:35:22 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>


class ScavTrap : public ClapTrap
{
    private:
        
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const &cpy);
        ScavTrap& operator = (ScavTrap const &obj);
        ~ScavTrap();


        void attack(const std::string& target);
        void guardGate();
};

#endif