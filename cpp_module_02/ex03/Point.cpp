/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 05:39:58 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/11 11:38:06 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
    // destructors
Point::Point():x(0), y(0)
{
    // std::cout << "default constructor called of Point\n";
}
Point::Point(const float a, const float b):x(a), y(b)
{
    // std::cout << "const float constructor called of Point\n";
};
    // copy constructor
Point::Point(const Point& right_handside):x(right_handside.x), y(right_handside.y)
{
    ;
}
    // copy assignement operator
Point Point::operator=(const Point& obj)
{
    Point ret(obj);
    return (ret);
}
    // destructor
Point::~Point()
{
    //    std::cout << "destructor called of Point\n";
}
    //  geterfix
int Point::getfix_x() const
{
    return (x.getRawBits());
}
int Point::getfix_y() const
{
    return (y.getRawBits());
}
