/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 00:24:55 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/08 00:51:14 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template < typename T >
void	iter(T *addr, size_t length, void (*f)(T &addr))
{
	for (size_t i = 0; i < length; i++)
	{
		f(*addr);
		addr++;
	}
}

#endif
