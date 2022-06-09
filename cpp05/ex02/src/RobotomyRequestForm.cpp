/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:42:15 by khirsig           #+#    #+#             */
/*   Updated: 2022/06/09 11:48:30 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RobotomyRequestForm.hpp"

/* ************************************************************************** */
/*   Constructors & Destructors                                               */
/* ************************************************************************** */

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), _target() { }

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target) { }

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form(other), _target(other._target) { }

RobotomyRequestForm::~RobotomyRequestForm() { }

/* ************************************************************************** */
/*   Operator Overloading                                                     */
/* ************************************************************************** */

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	Form::operator=(other);
	this->_target = other._target;

	return (*this);
}

/* ************************************************************************** */
/*   Member Functions                                                         */
/* ************************************************************************** */

void	RobotomyRequestForm::action() const
{
	std::cout << "*random drilling noises*"
		<< std::endl
		<< this->_target
		<< " has been robotomized successfully 50% of the time."
		<< std::endl;
}
