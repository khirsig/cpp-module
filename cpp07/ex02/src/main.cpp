/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 10:57:41 by khirsig           #+#    #+#             */
/*   Updated: 2022/06/14 12:25:58 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Array.hpp"

int	main()
{
	Array<int> arr(4);

	for (int i = 0; i < 4; ++i)
	{
		arr[i] = i;
		std::cout << arr[i] << std::endl;
	}
	try {
		Array<std::string> err;

		std::cout << err[0] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
