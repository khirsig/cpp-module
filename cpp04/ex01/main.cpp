/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:59:41 by khirsig           #+#    #+#             */
/*   Updated: 2022/05/16 11:40:45 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

#define COUNT 6

int	main()
{
	const Animal *animal[COUNT];

	std::cout << std::endl << "### Constructor Test ###" << std::endl;
	std::cout << "#######################" << std::endl;
	for (int i = 0; i < COUNT; ++i)
	{
		std::cout << i << " - ";
		if (i < COUNT / 2)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
		animal[i]->makeSound();
	}
	std::cout << "#######################" << std::endl;

	std::cout << std::endl << "### Destructor Test ###" << std::endl;
	std::cout << "#######################" << std::endl;
	for (int i = 0; i < COUNT; ++i)
		delete animal[i];
	std::cout << "#######################" << std::endl;

	std::cout << std::endl << "### Deep Copy Test ###" << std::endl;
	std::cout << "#######################" << std::endl;
	Cat cat, catCpy;
	cat.setBrain("I am Batman", 1);
	std::cout << "Cat: " << cat.getBrain(1) << std::endl;
	catCpy = cat;
	std::cout << "Cat Copy: " <<catCpy.getBrain(1) << std::endl;
	cat.setBrain("I am not Batman", 1);
	std::cout << "Cat: "<< cat.getBrain(1) << std::endl;
	std::cout << "Cat Copy: " << catCpy.getBrain(1) << std::endl;
	std::cout << "#######################" << std::endl << std::endl;

	system("leaks polymorphism");
	return 0;
}
