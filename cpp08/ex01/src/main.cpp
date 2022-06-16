/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 08:27:22 by khirsig           #+#    #+#             */
/*   Updated: 2022/06/16 11:27:41 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"
#include <cstdlib>
#include <ctime>

int	main()
{
	int	maxNbrs = 10;
	srand(time(NULL));

	std::cout << "### 10 Numbers Test ###" << std::endl;
	try {
		std::vector<int> input;

		int i = 0;
		while (i < maxNbrs)
		{
			int	rnd = rand() % 200;
			if (std::find(input.begin(), input.end(), rnd) == input.end())
			{
				input.push_back(rnd);
				++i;
			}
		}
		Span span(maxNbrs);
		span.addManyNumbers(input.begin(), input.end());

		std::cout << "Long: "
			<< span.longestSpan() << std::endl;
		std::cout << "Short: "
			<< span.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl
		<< "### Negative Numbers Test ###" << std::endl;
	try {
		int arr[] = { -2, 25, -7, 5, 10, 14, -15, 3 };
		std::vector<int> input(arr, arr + 8);

		Span span(maxNbrs);
		span.addManyNumbers(input.begin(), input.end());

		std::cout << "Long: "
			<< span.longestSpan() << std::endl;
		std::cout << "Short: "
			<< span.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl
		<< "### No Numbers Test ###" << std::endl;
	try {
		Span span(maxNbrs);

		std::cout << "Long: "
			<< span.longestSpan() << std::endl;
		std::cout << "Short: "
			<< span.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl
		<< "### Already Stored Numbers Test ###" << std::endl;
	try {
		Span span(maxNbrs);
		span.addNumber(1);
		span.addNumber(1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl
		<< "### Too many Numbers Test ###" << std::endl;
	try {
		std::vector<int> input;

		int i = 0;
		while (i < 20)
		{
			int	rnd = rand() % 200;
			if (std::find(input.begin(), input.end(), rnd) == input.end())
			{
				input.push_back(rnd);
				++i;
			}
		}
		Span span(maxNbrs);
		span.addManyNumbers(input.begin(), input.end());

		std::cout << "Long: "
			<< span.longestSpan() << std::endl;
		std::cout << "Short: "
			<< span.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl
		<< "### 10.000 Numbers Test ###" << std::endl;
	maxNbrs = 10000;
	try {
		std::vector<int> input;

		int i = 0;
		while (i < maxNbrs)
		{
			int	rnd = rand();
			if (std::find(input.begin(), input.end(), rnd) == input.end())
			{
				input.push_back(rnd);
				++i;
			}
		}
		Span span(maxNbrs);
		span.addManyNumbers(input.begin(), input.end());

		std::cout << "Long: "
			<< span.longestSpan() << std::endl;
		std::cout << "Short: "
			<< span.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
