/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 10:07:56 by khirsig           #+#    #+#             */
/*   Updated: 2022/03/22 08:56:27 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

int	main()
{
	Fixed t1;
	Fixed t2(t1);
	Fixed t3(t2);

	std::cout <<  t1.getRawBits() << std::endl << t2.getRawBits() << std::endl << t3.getRawBits() << std::endl;
	t3.setRawBits(42);
	t1 = t2 = t3;
	std::cout <<  t1.getRawBits() << std::endl << t2.getRawBits() << std::endl << t3.getRawBits() << std::endl;
	return (0);
}
