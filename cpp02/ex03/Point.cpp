/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 10:12:26 by khirsig           #+#    #+#             */
/*   Updated: 2022/03/29 11:22:05 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"

/* ************************************************************************** */
/*   Constructors & Destructors                                               */
/* ************************************************************************** */

Point::Point()
{
	this->_x = 0;
	this->_y = 0;
}

Point::Point(const float x, const float y)
{
	this->_x = x;
	this->_y = y;
}

Point::Point(const Point &input)
{
	this->_x = input._x;
	this->_y = input._y;
}

Point::~Point() { }

/* ************************************************************************** */
/*   Operator Overloading                                                     */
/* ************************************************************************** */

Point	&Point::operator=(const Point &other)
{
	this->_x = other._x;
	this->_y = other._y;
	return (*this);
}

/* ************************************************************************** */
/*   Member Functions                                                         */
/* ************************************************************************** */

float	Point::getX() const
{
	return (this->_x.toFloat());
}

float	Point::getY() const
{
	return (this->_y.toFloat());
}
