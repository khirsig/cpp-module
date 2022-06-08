/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:15:33 by khirsig           #+#    #+#             */
/*   Updated: 2022/06/08 15:23:18 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

/* ************************************************************************** */
/*   Constructors & Destructors                                               */
/* ************************************************************************** */

Bureaucrat::Bureaucrat()
{
	this->_grade = 50;
}

Bureaucrat::Bureaucrat(const std::string name) : _name(name)
{
	this->_grade = 50;
}

Bureaucrat::Bureaucrat(const std::string name, const int grade) : _name(name), _grade(grade)
{
	if (this->_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (this->_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	*this = other;
}

Bureaucrat::~Bureaucrat() { }

/* ************************************************************************** */
/*   Operator Overloading                                                     */
/* ************************************************************************** */

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &other)
{
	this->_grade = other._grade;
	if (this->_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (this->_grade > 150)
		throw (Bureaucrat::GradeTooLowException());

	return (*this);
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &output)
{
	os << output.getName()
		<< " has a grade of "
		<< output.getGrade()
		<< ".";
	return (os);
}

/* ************************************************************************** */
/*   Member Functions                                                         */
/* ************************************************************************** */

std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::incrementGrade()
{
	this->_grade -= 1;
	if (this->_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
}

void	Bureaucrat::decrementGrade()
{
	this->_grade += 1;
	if (this->_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

/* ************************************************************************** */
/*   Sub Class Functions                                                      */
/* ************************************************************************** */

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high.");
}
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low.");
}
