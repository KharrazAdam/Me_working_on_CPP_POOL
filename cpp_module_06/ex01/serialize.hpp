/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 11:32:55 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/21 12:58:26 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

# include <iostream>

typedef struct s_data{
	unsigned int x;
}Data;

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);
#endif // SERIALIZE_HPP