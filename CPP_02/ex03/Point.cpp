/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 19:51:15 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/10/30 01:47:30 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():y(0),x(0)
{
}

Point::~Point()
{
}

Point::Point(Point const &cpy):y(cpy.y),x(cpy.x)
{
}

Point::Point(const float x, const float y):y(y),x(x)
{
}

Point & Point::operator=(const Point &raw)
{
    if (this != &raw)
    {
       (Fixed)this->x = raw.get_X_P();
       (Fixed)this->y = raw.get_Y_P();
    }
    return (*this);
}

Fixed Point::get_X_P() const
{
    return (this->x);
}

Fixed Point::get_Y_P() const
{
    return (this->y);
}
