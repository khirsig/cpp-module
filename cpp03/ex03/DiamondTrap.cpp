/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 11:17:09 by khirsig           #+#    #+#             */
/*   Updated: 2022/05/02 14:46:55 by khirsig          ###   ########.fr       */
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
	std::cout << this->_name << " joins the lobby and says: "
			<< "\"This time it'll be awesome, I promise!\" [DiamondTrap-Constructor]" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &input)
{
	this->_name = input._name;
	ClapTrap::_name = this->_name + "_clap_name";
	this->_hitpoints = input._hitpoints;
	this->_energy = input._energy;
	this->_damage = input._damage;
	std::cout << this->_name << " joins the lobby and says: "
			<< "\"This time it'll be awesome, I promise!\" [DiamondTrap-Constructor]" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name)
{
	this->_name = name;
	ClapTrap::_name = this->_name + "_clap_name";
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energy = ScavTrap::_energy;
	this->_damage = FragTrap::_damage;
	std::cout << this->_name << " joins the lobby and says: "
			<< "\"This time it'll be awesome, I promise!\" [DiamondTrap-Constructor]" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << this->_name << " leaves the lobby and says: "
		<< "\"I AM ON FIRE!!! OH GOD, PUT ME OUT!!!\" [DiamondTrap-Destructor]" << std::endl;
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
