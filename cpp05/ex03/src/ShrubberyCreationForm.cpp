/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 10:28:42 by khirsig           #+#    #+#             */
/*   Updated: 2022/06/09 11:43:09 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ShrubberyCreationForm.hpp"

/* ************************************************************************** */
/*   Constructors & Destructors                                               */
/* ************************************************************************** */

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), _target() { }

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target) { }

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form(other), _target(other._target) { }

ShrubberyCreationForm::~ShrubberyCreationForm() { }

/* ************************************************************************** */
/*   Operator Overloading                                                     */
/* ************************************************************************** */

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	Form::operator=(other);
	this->_target = other._target;

	return (*this);
}

/* ************************************************************************** */
/*   Member Functions                                                         */
/* ************************************************************************** */

void	ShrubberyCreationForm::action() const
{
	std::ofstream	file;
	std::string		fileName = "./" + this->_target + "_shrubbery";

	file.open(fileName, std::ofstream::out | std::ofstream::trunc);
	file << "ASCII trees";
	file.close();
}
