/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarolle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 00:24:18 by bcarolle          #+#    #+#             */
/*   Updated: 2024/05/11 23:29:52 by bcarolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Array.tpp>

#define MAX_VAL 750
#define MIN_VAL 20

void	wrong_tester()
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//SCOPE
	{
		//For testing constructors
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return ;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}

	try
	{
		Array <int>salut(-1);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	delete [] mirror;
}

void	good_tester()
{
	std::cout << std::endl << "int:" << std::endl << std::endl;
	Array<int> numbers(MIN_VAL);
	for (int i = 0; i < MIN_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
	}
	std::cout << "First list:" << std::endl;
	for (int i = 0; i < MIN_VAL; i++)
	{
		std::cout << numbers[i] << " ";
	}
	std::cout << std::endl;
	for (int i = 0; i < MIN_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
	}
	std::cout << "Second list:" << std::endl;
	for (int i = 0; i < MIN_VAL; i++)
	{
		std::cout << numbers[i] << " ";
	}

	std::cout << std::endl << "char:" << std::endl << std::endl;
	Array<char> chars(MIN_VAL);
	for (int i = 0; i < MIN_VAL; i++)
	{
		const char value = rand();
		chars[i] = (value % 27) + 65;
	}
	std::cout << "First list:" << std::endl;
	for (int i = 0; i < MIN_VAL; i++)
	{
		std::cout << chars[i] << " ";
	}
	std::cout << std::endl;
}

int main(int, char**)
{
	std::cout << "Wrong tester" << std::endl;
	wrong_tester();

	std::cout << "Good tester" << std::endl;
	good_tester();
}
