/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:07:16 by khirsig           #+#    #+#             */
/*   Updated: 2022/06/09 10:10:16 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

int	main()
{

	try
	{
		Bureaucrat tim("Tim", 32);
		Form permitA38("Permit A38", 30, 55);

		std::cout << tim
			<< std::endl
			<< permitA38
			<< std::endl;
		tim.signForm(permitA38);
		std::cout << permitA38
			<< std::endl;
		tim.incrementGrade();
		tim.incrementGrade();
		tim.incrementGrade();
		tim.signForm(permitA38);
		std::cout << permitA38
			<< std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	return (0);
}
