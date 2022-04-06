/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:01:49 by khirsig           #+#    #+#             */
/*   Updated: 2022/04/06 12:49:13 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* ************************************************************************** */
/*   Constructors & Destructors                                               */
/* ************************************************************************** */

ScavTrap::ScavTrap()
{
	this->_name = "Unnamed";
	this->_hitpoints = 100;
	this->_energy = 50;
	this->_damage = 20;
	this->_maxHitpoints = this->_hitpoints;
	this->_maxEnergy = this->_energy;
	std::cout << this->_name << " joins the lobby and says: "
			<< "\"Hey everybody! Check out my package!\" [ScavTrap-Constructor]" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &input)
{
	*this = input;
	std::cout << this->_name << " joins the lobby and says: "
			<< "\"Hey everybody! Check out my package!\" [ScavTrap-Constructor]" << std::endl;
}

ScavTrap::ScavTrap(const std::string name)
{
	this->_name = name;
	this->_hitpoints = 100;
	this->_energy = 50;
	this->_damage = 20;
	this->_maxHitpoints = this->_hitpoints;
	this->_maxEnergy = this->_energy;
	std::cout << this->_name << " joins the lobby and says: "
			<< "\"Hey everybody! Check out my package!\" [ScavTrap-Constructor]" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->_name << " leaves the lobby and says: "
		<< "\"Dangit, I'm out!\" [ScavTrap-Destructor]" << std::endl;
}

/* ************************************************************************** */
/*   Member Functions                                                         */
/* ************************************************************************** */

void	ScavTrap::guardGate()
{
	std::cout << this->_name << " is now in Gate Keeper mode and says: "
			<< "\"You wanna fight with me?! Put 'em up!.. Put 'em up?\"" << std::endl;
}
