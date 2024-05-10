/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 00:54:43 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/10 23:52:04 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template < typename T >
class Array
{
	public:
		Array<T>();
		Array<T>(unsigned int n);
		Array(const Array &cpy);
		
		Array	&operator=(const Array &rhs);
		Array	&operator[](unsigned int index);

		int	size();

	private:
		T	value;
};

#include "Array.tpp"
#endif
