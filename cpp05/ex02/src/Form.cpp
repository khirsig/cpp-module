/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:39:39 by khirsig           #+#    #+#             */
/*   Updated: 2022/06/09 10:06:37 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"

/* ************************************************************************** */
/*   Constructors & Destructors                                               */
/* ************************************************************************** */

Form::Form() : _name(), _isSigned(false), _gradeSign(), _gradeExecute()
{ }

Form::Form(const std::string name, const int gradeSign, const int gradeExecute)
	: _name(name), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
	this->_isSigned = false;
	if (this->_gradeSign < 1 || this->_gradeExecute < 1)
		throw (Form::GradeTooHighException());
	if (this->_gradeSign > 150 || this->_gradeExecute > 150)
		throw (Form::GradeTooLowException());
}

Form::Form(const Form &other) : _name(other._name), _isSigned(other._isSigned), _gradeSign(other._gradeSign), _gradeExecute(other._gradeExecute)
{ }

Form::~Form() { }

/* ************************************************************************** */
/*   Operator Overloading                                                     */
/* ************************************************************************** */

Form	&Form::operator=(const Form &other)
{
	this->_isSigned = other._isSigned;

	return (*this);
}

std::ostream &operator<<(std::ostream &os, const Form &output)
{
	os << output.getName()
		<< " is ";
	if (output.getIsSigned())
		os << "signed";
	else
		os << "not signed";
	os << ", has a sign grade of "
		<< output.getGradeSign()
		<< " and a execute grade of "
		<< output.getGradeExecute()
		<< ".";
	return (os);
}

/* ************************************************************************** */
/*   Member Functions                                                         */
/* ************************************************************************** */

std::string	Form::getName() const
{
	return (this->_name);
}

bool	Form::getIsSigned() const
{
	return (this->_isSigned);
}

int		Form::getGradeSign() const
{
	return (this->_gradeSign);
}

int		Form::getGradeExecute() const
{
	return (this->_gradeExecute);
}

void	Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > this->_gradeSign)
		throw (Form::GradeTooLowException());
	this->_isSigned = true;
}

/* ************************************************************************** */
/*   Sub Class Functions                                                      */
/* ************************************************************************** */

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high.");
}
const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low.");
}
