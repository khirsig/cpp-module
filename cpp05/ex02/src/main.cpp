/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:07:16 by khirsig           #+#    #+#             */
/*   Updated: 2022/06/09 12:03:02 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"

int	main()
{
	try
	{
		Bureaucrat tim("Tim", 5);
		Form *permitA38 = new ShrubberyCreationForm("home");
		Form *permitA39 = new RobotomyRequestForm("Hannes");
		Form *permitA41 = new PresidentialPardonForm("Anna");

		std::cout << tim
			<< std::endl
			<< *permitA38
			<< std::endl;
		permitA38->beSigned(tim);
		std::cout << *permitA38
			<< std::endl;
		permitA38->execute(tim);
		delete permitA38;

		std::cout << *permitA39
			<< std::endl;
		permitA39->beSigned(tim);
		std::cout << *permitA39
			<< std::endl;
		permitA39->execute(tim);
		delete permitA39;

		std::cout << *permitA41
			<< std::endl;
		permitA41->beSigned(tim);
		std::cout << *permitA41
			<< std::endl;
		permitA41->execute(tim);
		delete permitA41;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return (0);
}
