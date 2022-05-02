/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 11:17:09 by khirsig           #+#    #+#             */
/*   Updated: 2022/05/02 14:01:25 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* ************************************************************************** */
/*   Constructors & Destructors                                               */
/* ************************************************************************** */

DiamondTrap::DiamondTrap()
{
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energy = ScavTrap::_energy;
	this->_damage = FragTrap::_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &input)
{
	this->_name = input._name;
	ClapTrap::_name = this->_name + "_clap_name";
	this->_hitpoints = input._hitpoints;
	this->_energy = input._energy;
	this->_damage = input._damage;
}

DiamondTrap::DiamondTrap(const std::string name)
{
	this->_name = name;
	ClapTrap::_name = this->_name + "_clap_name";
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energy = ScavTrap::_energy;
	this->_damage = FragTrap::_damage;
}

DiamondTrap::~DiamondTrap()
{

}

/* ************************************************************************** */
/*   Member Functions                                                         */
/* ************************************************************************** */

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My name is: " << this->_name
			<< " and my ClapTrap name is: " << ClapTrap::_name << std::endl;
}
