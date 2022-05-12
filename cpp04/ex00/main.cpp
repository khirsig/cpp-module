/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:59:41 by khirsig           #+#    #+#             */
/*   Updated: 2022/05/12 11:26:29 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	const WrongAnimal *t = new WrongCat();

	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	std::cout << t->getType() << std::endl;
	i->makeSound();
	j->makeSound();
	t->makeSound();
	meta->makeSound();
	return 0;
}
