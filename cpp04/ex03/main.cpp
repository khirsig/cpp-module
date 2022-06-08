/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:00:55 by khirsig           #+#    #+#             */
/*   Updated: 2022/06/08 10:59:31 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int	main()
{
	std::cout << "### MAIN TEST" << std::endl;
	{
		IMateriaSource *src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter *me = new Character("me");

		AMateria *tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter *bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}

	std::cout << std::endl << "### UNEQUIP TEST" << std::endl;
	{
		IMateriaSource *src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter *me = new Character("me");

		AMateria *tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		std::cout << "# me->unequip(\"cure\")" << std::endl;
		me->unequip(1);

		ICharacter *bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
		delete tmp;
	}

	std::cout << std::endl << "### COPY TEST" << std::endl;
	{
		// CREATE MATERIA SOURCE TEMPLATES
		IMateriaSource *src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		// CREATE NEW CHARACTER ME
		Character me("me");

		// EQUIP CHARACTER ME WITH BOTH MATERIALS
		AMateria *tmp;
		tmp = src->createMateria("ice");
		me.equip(tmp);
		tmp = src->createMateria("cure");
		me.equip(tmp);

		// CREATE NEW CHARACTER BOB
		Character bob("bob");

		// EQUIP BOB WITH SAME MATERIALS AS ME
		bob = me;

		// EQUIP BOB WITH SAME MATERIALS AS ME
		me.use(0, bob);
		bob.use(0, me);

		me.use(1, bob);
		bob.use(1, me);

		delete src;
	}

	return 0;
}