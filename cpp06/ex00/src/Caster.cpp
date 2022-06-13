/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 10:52:27 by khirsig           #+#    #+#             */
/*   Updated: 2022/06/13 12:19:48 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Caster.hpp"

Caster::Caster() { }

Caster::Caster(std::string input) : _input(input)
{
	if (!(this->_input.find_first_not_of(".") == std::string::npos)
		&& this->_input.size() - 1 > 1
		&& this->_input[this->_input.size() - 1] == 'f'
		&& this->_input != "+inff" && this->_input != "-inff"
		&& this->_input != "+inf" && this->_input != "-inf")
		this->_input = this->_input.substr(0, this->_input.size() - 1);
}

Caster::Caster(const Caster &other)
{
	*this = other;
}

Caster::~Caster() { }

Caster	&Caster::operator=(const Caster &other)
{
	this->_input = other._input;

	return (*this);
}

char	Caster::toChar() const
{
	int c = Caster::toInt();
	if (c > 256 || c < 0)
		throw(Caster::ImpossibleException());
	if (!isprint(c))
		throw (Caster::NonDisplayableException());

	return (c);
}

int		Caster::toInt() const
{
	long i;

	if (!(this->_input.find_first_not_of(".+-0123456789") == std::string::npos))
		throw (Caster::ImpossibleException());
	std::istringstream(this->_input) >> i;
	if (i > std::numeric_limits<int>::max() || i < std::numeric_limits<int>::min())
		throw (Caster::ImpossibleException());

	return ((int)i);
}

float	Caster::toFloat() const
{
	long double f;

	if (this->_input == "nan" || this->_input == "nanf")
		throw (Caster::NanException());
	if (this->_input == "+inf" || this->_input == "+inff")
		throw (Caster::PosInfException());
	if (this->_input == "-inf" || this->_input == "-inff")
		throw (Caster::NegInfException());
	if (!(this->_input.find_first_not_of(".+-0123456789") == std::string::npos))
		throw (Caster::ImpossibleException());
	f = strtof(this->_input.c_str(), NULL);
	if (f > std::numeric_limits<float>::max() || f < std::numeric_limits<float>::min())
		throw (Caster::ImpossibleException());
	return ((float)f);
}

double	Caster::toDouble() const
{
	long double d;

	if (this->_input == "nan" || this->_input == "nanf")
		throw (Caster::NanException());
	if (this->_input == "+inf" || this->_input == "+inff")
		throw (Caster::PosInfException());
	if (this->_input == "-inf" || this->_input == "-inff")
		throw (Caster::NegInfException());
	if (!(this->_input.find_first_not_of(".+-0123456789") == std::string::npos))
		throw (Caster::ImpossibleException());
	d = strtod(this->_input.c_str(), NULL);
	if (d > std::numeric_limits<double>::max() || d < std::numeric_limits<double>::min())
		throw (Caster::ImpossibleException());
	return ((double)d);
}

std::string	Caster::getInput() const
{
	return (this->_input);
}

std::ostream &operator<<(std::ostream &os, const Caster &output)
{
	try
	{
		char c = output.toChar();
		os << "'" << c << "'";
	}
	catch (const std::exception& e)
	{
		os << e.what();
	}
	os << std::endl;
	try
	{
		int i = output.toInt();
		os << i;
	}
	catch (const std::exception& e)
	{
		os << e.what();
	}
	os << std::endl;
	try
	{
		float f = output.toFloat();
		os << std::fixed << std::setprecision(2) << f << "f";
	}
	catch (const std::exception& e)
	{
		std::string ex = e.what();
		os << ex;
		if (ex == "nan" || ex == "+inf" || ex == "-inf")
			os << "f";
	}
	os << std::endl;
	try
	{
		double d = output.toDouble();
		os << d;
	}
	catch (const std::exception& e)
	{
		os << e.what();
	}
	os << std::endl;
	return (os);
}

const char *Caster::ImpossibleException::what() const throw()
{
	return ("impossible");
}

const char *Caster::NonDisplayableException::what() const throw()
{
	return ("Non displayable");
}

const char *Caster::NanException::what() const throw()
{
	return ("nan");
}

const char *Caster::PosInfException::what() const throw()
{
	return ("+inf");
}

const char *Caster::NegInfException::what() const throw()
{
	return ("-inf");
}
