/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 10:07:56 by khirsig           #+#    #+#             */
/*   Updated: 2022/03/29 12:32:23 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"

int	main()
{
	Point a(1, 1), b(4, 1), c(2.5, 4), point(2.5, 3.9);
	bool answer = bsp(a, b, c, point);

	if (answer)
		std::cout << "The given point is inside the triangle." << std::endl;
	else
		std::cout << "The given point is NOT inside the triangle." << std::endl;
	return (0);
}
