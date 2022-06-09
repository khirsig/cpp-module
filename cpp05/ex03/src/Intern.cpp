/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 12:19:26 by khirsig           #+#    #+#             */
/*   Updated: 2022/06/09 13:48:37 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Intern.hpp"

Intern::Intern()
{

}

Intern::Intern(const Intern &other)
{
	*this = other;
}

Intern::~Intern() { }

Intern	&Intern::operator=(const Intern &other)
{
	(void)other;
	return (*this);
}

Form	*Intern::makeForm(std::string name, std::string target)
{
	const std::string compareName[3] =
		{ "ShrubberyCreationForm",
		"RobotomyRequestForm",
		"PresidentialPardonForm" };

	Form *(*ret[])(const std::string target) =
		{ &ShrubberyCreationForm::create,
		&RobotomyRequestForm::create,
		&PresidentialPardonForm::create };

	for (int i = 0; i < 3; ++i)
	{
		if (name == compareName[i])
			return (ret[i](target));
	}
	return (NULL);
}
