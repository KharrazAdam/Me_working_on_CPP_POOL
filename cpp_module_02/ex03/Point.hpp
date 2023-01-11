/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 04:46:32 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/11 06:36:19 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
    Fixed const x;
    Fixed const y;
public:
    //  constructors
    Point();
    Point(const float, const float);
    Point(const Point&);
    // destructor
    ~Point();
    // copy assignement operator 
    Point& operator=(const Point&);
    //getter
    int getfix_x(void);
    int getfix_y(void);
};

#endif // POINT_HPP
