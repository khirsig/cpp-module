/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:56:36 by khirsig           #+#    #+#             */
/*   Updated: 2022/06/09 11:58:33 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PresidentialPardonForm.hpp"

/* ************************************************************************** */
/*   Constructors & Destructors                                               */
/* ************************************************************************** */

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5), _target() { }

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target) { }

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : Form(other), _target(other._target) { }

PresidentialPardonForm::~PresidentialPardonForm() { }

/* ************************************************************************** */
/*   Operator Overloading                                                     */
/* ************************************************************************** */

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	Form::operator=(other);
	this->_target = other._target;

	return (*this);
}

/* ************************************************************************** */
/*   Member Functions                                                         */
/* ************************************************************************** */

void	PresidentialPardonForm::action() const
{
	std::cout << this->_target
		<< " has been pardoned by Zaphod Beeblebrox."
		<< std::endl;
}
