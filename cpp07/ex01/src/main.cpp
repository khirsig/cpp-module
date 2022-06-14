/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 16:29:02 by khirsig           #+#    #+#             */
/*   Updated: 2022/06/14 10:53:13 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/iter.hpp"

static void	truthSpeaker(std::string &str)
{
	str = "The next 42 school should be created on Sylt!";
}

static void	multiply(int &i)
{
	i *= i;
}

static void toUpper(char &c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
}

int	main()
{
	char str[] = "tjensen & hepple miniRT is amazing!";

	std::cout << str << std::endl;
	iter(str, 36, toUpper);
	std::cout << str << std::endl
		<< std::endl;

	int arr[] = { 3, 4, 20, 100 };

	for (int i = 0; i < 4; ++i)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
	iter(arr, 4, multiply);
	for (int i = 0; i < 4; ++i)
		std::cout << arr[i] << " ";
	std::cout << std::endl << std::endl;

	std::string test[] = { "Hello World!", "FFM", "A random String" };

	for (int i = 0; i < 3; ++i)
		std::cout << test[i] << std::endl;
	iter(test, 3, truthSpeaker);
	for (int i = 0; i < 3; ++i)
		std::cout << test[i] << std::endl;
	return (0);
}
