/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 00:54:43 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/11 18:03:08 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>
# include <cstdlib>

template < typename T >
class Array
{
	public:
		Array<T>();
		Array<T>(unsigned int n);
		Array<T>(const Array<T> &cpy);
		~Array<T>();
		
		Array<T>	&operator=(const Array<T> &rhs);
		T	&operator[](unsigned int index);

		unsigned int	size();

	private:
		size_t	_size;
		T		*value;
};
#endif
