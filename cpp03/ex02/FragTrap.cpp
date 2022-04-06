/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:26:47 by khirsig           #+#    #+#             */
/*   Updated: 2022/04/06 12:39:04 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* ************************************************************************** */
/*   Constructors & Destructors                                               */
/* ************************************************************************** */

FragTrap::FragTrap()
{
	this->_name = "Unnamed";
	this->_hitpoints = 100;
	this->_energy = 100;
	this->_damage = 30;
	this->_maxHitpoints = this->_hitpoints;
	this->_maxEnergy = this->_energy;
	std::cout << this->_name << " joins the lobby and says: "
			<< "\"Recompiling my combat code!\" [FragTrap-Constructor]" << std::endl;
}

FragTrap::FragTrap(FragTrap &input)
{
	*this = input;
	std::cout << this->_name << " joins the lobby and says: "
			<< "\"Recompiling my combat code!\" [FragTrap-Constructor]" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hitpoints = 100;
	this->_energy = 100;
	this->_damage = 30;
	this->_maxHitpoints = this->_hitpoints;
	this->_maxEnergy = this->_energy;
	std::cout << this->_name << " joins the lobby and says: "
			<< "\"Recompiling my combat code!\" [FragTrap-Constructor]" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << this->_name << " leaves the lobby and says: "
		<< "\"(unintelligible snarling)\" [FragTrap-Destructor]" << std::endl;
}

/* ************************************************************************** */
/*   Member Functions                                                         */
/* ************************************************************************** */

void	FragTrap::highFivesGuys()
{
	std::cout << this->_name << " yells: Gimme five!" << std::endl;
}
