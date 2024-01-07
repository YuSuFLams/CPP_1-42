/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 18:16:39 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/10/30 00:07:24 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
    private:
        int fix;
        static const int fix_bit = 8;
    public:
        Fixed();
        Fixed(const Fixed &cpy);
        ~Fixed();
        Fixed &operator=(const Fixed &obj);

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
};

#endif 
