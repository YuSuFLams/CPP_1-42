/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 02:05:34 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/11/02 02:35:59 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : public ClapTrap
{
    private:

    public:
		FragTrap();
        FragTrap(std::string name);
		FragTrap( FragTrap const &cpy );
		FragTrap&   operator=( FragTrap const &obj );
		~FragTrap();


		void attack(const std::string& target);

		void highFivesGuys();
};

#endif