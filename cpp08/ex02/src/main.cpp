/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 11:29:57 by khirsig           #+#    #+#             */
/*   Updated: 2022/06/16 13:02:00 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MutantStack.hpp"
#include <ctime>
#include <cstdlib>

int	main()
{
	MutantStack<int> stack;
	int maxNbrs = 10;
	int i = 0;

	srand(time(NULL));
	while (i < maxNbrs)
	{
		int	rnd = rand() % 200;
		if (std::find(stack.begin(), stack.end(), rnd) == stack.end())
		{
			stack.push(rnd);
			++i;
		}
	}
	MutantStack<int>::iterator it;
	for (it = stack.begin(); it < stack.end(); ++it)
	{
		std::cout << *it << std::endl;
	}
	return (0);
}
