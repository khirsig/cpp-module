/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 16:11:58 by khirsig           #+#    #+#             */
/*   Updated: 2022/06/13 16:26:32 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/whatever.hpp"

template <typename type>

void swap(type &v1, type &v2)
{
	type temp = v2;
	v2 = v1;
	v1 = temp;
}

template <typename type>

type min(const type &v1, const type &v2)
{
	if (v1 > v2)
		return (v2);
	if (v2 > v1)
		return (v1);
	return (v2);
}

template <typename type>

type max(const type &v1, const type &v2)
{
	if (v1 > v2)
		return (v1);
	if (v2 > v1)
		return (v2);
	return (v2);
}

int	main()
{
	int a = 2;
	int b = 3;

	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "max(c, d) = " << ::max(c, d) << std::endl;

	return (0);
}