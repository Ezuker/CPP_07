/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 00:24:18 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/10 22:58:59 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

static inline void    opposite(int &nb)
{
    nb = -nb;
}

void    test1(int &exit_code)
{
    int    arr[5] = {0, 1, 2, 3, 4};

    ::iter(arr, 5, &opposite);

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] != -i)
        {
            std::cerr << "iteration with opposite fct doesnt work. (" << i << " : " << arr[i] << ")" << std::endl;
            exit_code++;
            return ;
        }
        else
            std::cout << "value of " << i << " = " << arr[i] << std::endl;
    }
}


void    test_launcher(int &exit_code, void (*test_fct)(int &), int test_nb)
{
    int    prev_exit_code = exit_code;

    try
    {
        (*test_fct)(exit_code);
    }
    catch (std::exception &err)
    {
        exit_code += 1;
        std::cerr << "Unhandled exception in test : " << err.what() << std::endl;
    }
    if (exit_code != prev_exit_code)
        std::cout << "Test " << test_nb << " : failed." << std::endl;
    else
        std::cout << "Test " << test_nb << " : success." << std::endl;
}

int    main(void)
{
    int    exit_code = 0;
    int    test_nb = 1;

    test_launcher(exit_code, &test1, test_nb++);

    return exit_code;
}
