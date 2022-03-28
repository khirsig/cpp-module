/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 10:07:56 by khirsig           #+#    #+#             */
/*   Updated: 2022/03/22 15:46:36 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

int	main()
{
	// Fixed a;
	// Fixed const b( 10 );
	// Fixed const c( 42.42f );
	// Fixed const d( b );

	// a = Fixed( 1234.4321f );

	// std::cout << "a is " << a << std::endl;
	// std::cout << "b is " << b << std::endl;
	// std::cout << "c is " << c << std::endl;
	// std::cout << "d is " << d << std::endl;

	// std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	// std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	// std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	// std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	Fixed a(-4.4f);
	std::cout << a << " " << a.toInt() << std::endl;
	return (0);
}
