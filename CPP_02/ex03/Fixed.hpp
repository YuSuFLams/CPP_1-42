/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 18:16:39 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/10/29 19:31:42 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <math.h>

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
        
        Fixed(const int num);
        Fixed(const float num);

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );

        float   toFloat( void ) const;
        int     toInt( void ) const;

        Fixed operator ++ ();
		Fixed operator ++ (int);
		Fixed operator -- ();
		Fixed operator -- (int);
        
        float operator + (const Fixed & obj) const;
		float operator - (const Fixed & obj) const;
		float operator * (const Fixed & obj) const;
		float operator / (const Fixed & obj) const;

        bool	operator <  ( Fixed const & obj );
		bool	operator >  ( Fixed const & obj );
		bool	operator <= ( Fixed const & obj );
		bool	operator >= ( Fixed const & obj );
		bool	operator == ( Fixed const & obj );
		bool	operator != ( Fixed const & obj );

        static Fixed max(Fixed &a, Fixed &b);
        static const Fixed max(const Fixed &a, const Fixed &b);
        static Fixed min(Fixed &a, Fixed &b);
        static const Fixed min(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &output, Fixed const &input);
#endif 