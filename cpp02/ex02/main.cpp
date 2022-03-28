/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 10:07:56 by khirsig           #+#    #+#             */
/*   Updated: 2022/03/28 15:13:23 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

int	main()
{
	Fixed b(-5.4f), a(5.4f);
	Fixed c(0);

	std::cout << std::endl;
	std::cout << b << std::endl;
	std::cout << a << std::endl;
	// std::cout << a << " " << b << std::endl;
	// if (a > b)
	// 	std::cout << "a is bigger than b" << std::endl;
	// if (a < b)
	// 	std::cout << "b is bigger than a" << std::endl;
	// if (a == b)
	// 	std::cout << "a is equal to b" << std::endl;
	// if (a != b)
	// 	std::cout << "a is unequal to b" << std::endl;
	// c = a;
	// c = c + b + a;
	// c += b;
	// ++c;
	// Fixed d(c);
	// std::cout << ++c << "   " << d << std::endl;
	// std::cout << std::endl;
	// c += a;
	// std::cout << c << std::endl << a + b << std::endl;
	return (0);
}
