/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:08:30 by khirsig           #+#    #+#             */
/*   Updated: 2022/06/13 15:47:42 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include <iostream>
#include "../include/A.hpp"
#include "../include/B.hpp"
#include "../include/C.hpp"

Base	*generate()
{
	std::srand(time(NULL));
	int rnd = std::rand() % 3;

	std::cout << rnd << std::endl;
	switch (rnd) {
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
	}
	return (NULL);
}

void	identify(Base *p)
{
	A *a;
	a = dynamic_cast<A*>(p);
	if (a != NULL)
	{
		std::cout << "Type is identified as A."
			<< std::endl;
		return ;
	}
	B *b;
	b = dynamic_cast<B*>(p);
	if (b != NULL)
	{
		std::cout << "Type is identified as B."
			<< std::endl;
		return ;
	}
	C *c;
	c = dynamic_cast<C*>(p);
	if (c != NULL)
	{
		std::cout << "Type is identified as C."
			<< std::endl;
		return ;
	}
}

void	identify(Base &p)
{
	try
	{
		A a;
		a = dynamic_cast<A&>(p);
		std::cout << "Type is identified as A."
			<< std::endl;
		return ;
	}
	catch (std::exception &e) { };
	try
	{
		B b;
		b = dynamic_cast<B&>(p);
		std::cout << "Type is identified as B."
			<< std::endl;
		return ;
	}
	catch (std::exception &e) { };
	try
	{
		C c;
		c = dynamic_cast<C&>(p);
		std::cout << "Type is identified as C."
			<< std::endl;
		return ;
	}
	catch (std::exception &e) { };
}

int	main()
{
	Base *base = generate();

	identify(base);
	identify(*base);
	return (0);
}