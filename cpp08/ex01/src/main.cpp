/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 08:27:22 by khirsig           #+#    #+#             */
/*   Updated: 2022/06/15 09:05:22 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

int	main()
{
	Span span(3);

	span.addNumber(5);
	span.addNumber(7);
	span.addNumber(2);

	std::cout << span[1] << span [2] << std::endl;
	std::cout << span.longestSpan() << std::endl;
	return (0);
}
