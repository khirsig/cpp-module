/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 10:13:00 by khirsig           #+#    #+#             */
/*   Updated: 2022/06/10 11:07:29 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Caster.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Invalid amount of arguments."
			<< std::endl;
		return (1);
	}

	Caster caster(argv[1]);

	std::cout << "char: " << caster.toChar() << std::endl;
	std::cout << "int: " << caster.toInt() << std::endl;
	std::cout << "float: " << caster.toFloat() << std::endl;
	std::cout << "double: " << caster.toDouble() << std::endl;

	return (0);
}
