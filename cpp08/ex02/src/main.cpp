/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 11:29:57 by khirsig           #+#    #+#             */
/*   Updated: 2022/06/16 13:00:53 by khirsig          ###   ########.fr       */
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
	// MutantStack<int> mstack;

	// mstack.push(5);
	// mstack.push(17);

	// std::cout << mstack.top() << std::endl;

	// mstack.pop();

	// std::cout << mstack.size() << std::endl;

	// mstack.push(3);
	// mstack.push(5);
	// mstack.push(737);
	// //[...]
	// mstack.push(0);

	// MutantStack<int>::iterator it = mstack.begin();
	// MutantStack<int>::iterator ite = mstack.end();

	// ++it;
	// --it;
	// while (it != ite)
	// {
	// 	std::cout << *it << std::endl;
	// 	++it;
	// }
	// std::stack<int> s(mstack);
	return (0);
}
