/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 05:39:58 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/11 06:45:05 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
    // destructors
Point::Point():x(0), y(0)
{
    std::cout << "default constructor called of Point\n";
}
Point::Point(const float a, const float b):x(a), y(b)
{
    std::cout << "const float constructor called of Point\n";
};
    // copy constructor
Point::Point(const Point& right_handside)
{
    *this = right_handside;
}
    // copy assignement operator
Point& Point::operator=(const Point& obj)
{
    return (Point&)obj;
}
    // destructor
Point::~Point()
{
       std::cout << "destructor called of Point\n";
}
    //  geterfix
int Point::getfix_x()
{
    return (x.getRawBits());
}
int Point::getfix_y()
{
    return (x.getRawBits());
}
