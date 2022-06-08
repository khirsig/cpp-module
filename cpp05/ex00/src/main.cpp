/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:07:16 by khirsig           #+#    #+#             */
/*   Updated: 2022/06/08 15:23:40 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

int	main()
{

	try
	{
		Bureaucrat tim("Tim", 15);
		while (tim.getGrade() > 0)
		{
			tim.incrementGrade();
			std::cout << tim << std::endl;
		}
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	return (0);
}
