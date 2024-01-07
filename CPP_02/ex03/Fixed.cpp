/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 18:18:27 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/10/29 20:21:18 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): fix(0)
{
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &cpy)
{
    *this = cpy;
}

Fixed &Fixed::operator=(const Fixed &obj)
{
    if (this != &obj)
        this->fix = obj.getRawBits();
    return (*this);
}

int     Fixed::getRawBits( void ) const
{
    return (this->fix);
}

void    Fixed::setRawBits( int const raw )
{
    this->fix = raw;
}

Fixed::Fixed(const int num)
{
    this->fix = num << this->fix_bit;
}

Fixed::Fixed(const float num)
{
    this->fix = roundf(num * (1 << this->fix_bit));
}

int Fixed::toInt( void ) const
{
    return (this->fix >> this->fix_bit);
}

float Fixed::toFloat( void ) const
{
    return ((float)(this->fix) / (1 << this->fix_bit));
}

std::ostream &operator<<(std::ostream &output, Fixed const &input)
{
    output << input.toFloat();
    return (output);
}

float Fixed::operator+(const Fixed & obj) const
{
    return (this->toFloat() + obj.toFloat());
}

float Fixed::operator-(const Fixed & obj) const
{
    return (this->toFloat() - obj.toFloat());
}

float Fixed::operator*(const Fixed & obj) const
{
    return (this->toFloat() * obj.toFloat());
}

float Fixed::operator/(const Fixed & obj) const
{
    return (this->toFloat() / obj.toFloat());
}


bool	Fixed::operator <  ( Fixed const & obj )
{
    return (this->fix < obj.fix);
}

bool	Fixed::operator >  ( Fixed const & obj )
{
    return (this->fix > obj.fix);
}

bool	Fixed::operator <= ( Fixed const & obj )
{
    return (this->fix <= obj.fix);
}

bool	Fixed::operator >= ( Fixed const & obj )
{
    return (this->fix >= obj.fix);
}


bool	Fixed::operator == ( Fixed const & obj )
{
    return (this->fix == obj.fix);
}

bool	Fixed::operator != ( Fixed const & obj )
{
    return (this->fix != obj.fix);
}

Fixed Fixed::max(Fixed &a, Fixed &b)
{
    return ((a.getRawBits() > b.getRawBits())? a : b);
}

Fixed const Fixed::max(const Fixed &a, const Fixed &b)
{
    return ((a.getRawBits() > b.getRawBits())? a : b);
}


Fixed Fixed::min(Fixed &a, Fixed &b)
{
    return ((a.getRawBits() > b.getRawBits())? b : a);
}

Fixed const Fixed::min(const Fixed &a, const Fixed &b)
{
    return ((a.getRawBits() > b.getRawBits())? b : a);
}

Fixed Fixed::operator ++ ()
{
    ++this->fix;
    return (*this);
}

Fixed Fixed::operator ++ (int)
{
    Fixed obj = (*this);

    ++this->fix;
    return (obj);
}


Fixed Fixed::operator -- ()
{
    --this->fix;
    return (*this);
}

Fixed Fixed::operator -- (int)
{
    Fixed obj = (*this);

    --this->fix;
    return (obj);
}
