/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 00:24:18 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/11 23:01:46 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

static inline void	opposite(int &nb)
{
	nb = -nb;
}

void	test1()
{
	int	arr[5] = {0, 1, 2, 3, 4};

	::iter(arr, 5, &opposite);

	for (int i = 0; i < 5; i++)
	{
		if (arr[i] != -i)
		{
			std::cerr << "iteration with opposite fct doesnt work. (" << i << " : " << arr[i] << ")" << std::endl;
			return ;
		}
		else
			std::cout << "value of " << i << " = " << arr[i] << std::endl;
	}
}


void	test_launcher(void (*test_fct)())
{
	try
	{
		(*test_fct)();
	}
	catch (std::exception &err)
	{
		std::cerr << "Unhandled exception in test : " << err.what() << std::endl;
	}
}

int	main(void)
{
	test_launcher(&test1);
}
