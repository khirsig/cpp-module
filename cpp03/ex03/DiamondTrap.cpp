/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:49:46 by khirsig           #+#    #+#             */
/*   Updated: 2022/04/06 12:58:21 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*   Constructors & Destructors                                               */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	this->_name = "Unnamed";
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energy = ScavTrap::_energy;
	this->_damage = FragTrap::_damage;
	this->_maxHitpoints = this->_hitpoints;
	this->_maxEnergy = this->_energy;
	std::cout << this->_name << " joins the lobby and says: "
			<< "\"Recompiling my combat code!\" [DiamondTrap-Constructor]" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &input)
{
	*this = input;
	std::cout << this->_name << " joins the lobby and says: "
			<< "\"Recompiling my combat code!\" [DiamondTrap-Constructor]" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name)
{
	this->_name = name;
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energy = ScavTrap::_energy;
	this->_damage = FragTrap::_damage;
	this->_maxHitpoints = this->_hitpoints;
	this->_maxEnergy = this->_energy;
	std::cout << this->_name << " joins the lobby and says: "
			<< "\"Recompiling my combat code!\" [DiamondTrap-Constructor]" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << this->_name << " leaves the lobby and says: "
		<< "\"(unintelligible snarling)\" [DiamondTrap-Destructor]" << std::endl;
}

/* ************************************************************************** */
/*   Member Functions                                                         */
/* ************************************************************************** */

void	DiamondTrap::whoAmI()
{

}
