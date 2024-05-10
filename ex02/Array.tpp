/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 23:08:32 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/10 23:52:59 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include "Array.hpp"

Array::Array()
{
	
}

Array::Array(unsigned int n)
{
	
}

Array	&Array::operator[](unsigned int index)
{
	if (index > this->size())
		throw std::exception();
	return (this[index]);
}

unsigned int	Array::size()
{
	
}

#endif
