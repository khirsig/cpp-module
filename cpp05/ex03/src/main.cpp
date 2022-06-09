/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:07:16 by khirsig           #+#    #+#             */
/*   Updated: 2022/06/09 12:49:35 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/Intern.hpp"

int	main()
{
	try
	{
		Bureaucrat tim("Tim", 5);
		Intern	esra;
		Form *permitA38 = esra.makeForm("ShrubberyCreationForm", "home");
		Form *permitA39 = new RobotomyRequestForm("Hannes");
		Form *permitA41 = new PresidentialPardonForm("Anna");

		std::cout << tim
			<< std::endl
			<< *permitA38
			<< std::endl;
		permitA38->beSigned(tim);
		std::cout << *permitA38
			<< std::endl;
		tim.executeForm(*permitA38);
		delete permitA38;

		std::cout << *permitA39
			<< std::endl;
		permitA39->beSigned(tim);
		std::cout << *permitA39
			<< std::endl;
		tim.executeForm(*permitA39);
		delete permitA39;

		std::cout << *permitA41
			<< std::endl;
		permitA41->beSigned(tim);
		std::cout << *permitA41
			<< std::endl;
		tim.executeForm(*permitA41);
		delete permitA41;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return (0);
}
