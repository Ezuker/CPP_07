/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 23:08:32 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/11 23:31:38 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include "Array.hpp"

template <typename T>
Array<T>::Array() : _size(0), value(NULL)
{
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	this->_size = n;
	try
	{
		if (n > 10000)
			throw std::exception();
		this->value = new T[n];
	}
	catch (std::exception &e)
	{
		this->value = NULL;
		this->_size = 0;
		std::cerr << "Allocation failed " << e.what() << std::endl;
	}
}

template <typename T>
Array<T>::Array(const Array<T> &cpy)
{
	*this = cpy;
}

template <typename T>
Array<T>::~Array()
{
	delete [] this->value;
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array<T> &rhs)
{
	try
	{
		this->_size = rhs._size;
		this->value = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; i++)
		{
			this->value[i] = *rhs.value;
		}
		return (*this);
	}
	catch (std::exception &e)
	{
		this->value = NULL;
		this->_size = 0;
		std::cerr << "Allocation failed " << e.what() << std::endl;
	}
	return (*this);
}


template <typename T>
unsigned int	Array<T>::size()
{
	return (this->_size);
}

template <typename T>
T	&Array<T>::operator[](unsigned int index)
{
	if (index >= this->_size)
		throw std::exception();
	return (this->value[index]);
}
#endif
