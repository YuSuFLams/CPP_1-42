/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:34:04 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/10/25 19:59:25 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <cstdlib>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        ~Zombie();

        void    announce( void );
        void    setName( std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif
