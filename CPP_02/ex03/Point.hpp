/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 19:49:09 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/10/29 20:27:00 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
    private:
        const Fixed y;
        const Fixed x;
    public:
        Point();
        Point(const float x, const float y);
        Point(Point const &cpy);
        Point &operator=(const Point &obj);
        ~Point();

        Fixed get_X_P( void ) const;
        Fixed get_Y_P( void ) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif