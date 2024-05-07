/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 00:16:34 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/08 00:23:21 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template< typename T >
T	max(T const &t1, T const &t2)
{
	return (t1 > t2 ? t1 : t2);
}

template< typename T >
T	min(T const &t1, T const &t2)
{
	return (t1 < t2 ? t1 : t2);
}

template< typename T >
void	swap(T &t1, T &t2)
{
	T	tmp;

	tmp = t1;
	t1 = t2;
	t2 = tmp;
}
#endif
