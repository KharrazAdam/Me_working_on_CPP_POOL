/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 17:51:31 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/03 20:16:41 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HARL_HPP
#define HARL_HPP

# include <iostream>

class Harl
{
private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
public:
    void complain( std::string level );
    Harl(/* args */);
    ~Harl();
};


// return_type (class_name::*pointer_name)(arguments);
// typedef void (Harl::*pointer_name)(void);
#endif //HARL_HPP