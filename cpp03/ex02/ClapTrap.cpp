/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 09:13:10 by khirsig           #+#    #+#             */
/*   Updated: 2022/04/06 12:49:22 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* ************************************************************************** */
/*   Constructors & Destructors                                               */
/* ************************************************************************** */

ClapTrap::ClapTrap()
{
	this->_name = "Unnamed";
	this->_damage = 0;
	this->_hitpoints = 10;
	this->_energy = 10;
	this->_maxHitpoints = this->_hitpoints;
	this->_maxEnergy = this->_energy;
	std::cout << this->_name << " joins the lobby and says: "
			<< "\"Look out everybody! Things are about to get awesome!\" [ClapTrap-Constructor]" << std::endl;
}

ClapTrap::ClapTrap(const std::string name)
{
	this->_name = name;
	this->_damage = 0;
	this->_hitpoints = 10;
	this->_energy = 10;
	this->_maxHitpoints = this->_hitpoints;
	this->_maxEnergy = this->_energy;
	std::cout << this->_name << " joins the lobby and says: "
			<< "\"Look out everybody! Things are about to get awesome!\" [ClapTrap-CConstructor]" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &input)
{
	*this = input;
	std::cout << this->_name << " joins the lobby and says: "
		<< "\"Look out everybody! Things are about to get awesome!\" [ClapTrap-CConstructor]" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->_name << " leaves the lobby and says: "
		<< "\"Good thing I don't have a soul!\" [ClapTrap-CDestructor]" << std::endl;
}

/* ************************************************************************** */
/*   Operator Overloading                                                     */
/* ************************************************************************** */

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	this->_name = other._name;
	this->_damage = other._damage;
	this->_hitpoints = other._hitpoints;
	this->_maxHitpoints = other._maxHitpoints;
	this->_energy = other._energy;
	this->_maxEnergy = other._maxEnergy;

	return (*this);
}

/* ************************************************************************** */
/*   Member Functions                                                         */
/* ************************************************************************** */

int			ClapTrap::getDamage()
{
	return (this->_damage);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_energy < 1)
	{
		std::cout << this->_name << " can not attack because it has not enough energy." << std::endl;
		return ;
	}
	if (this->_hitpoints < 1)
	{
		std::cout << this->_name << " can not attack because it is already dead." << std::endl;
		return ;
	}
	std::cout << this->_name << " attacks " << target << " for " << this->_damage
			<< " damage while shouting: \"Ha ha ha! Fall before your robot overlord!\"" << std::endl;
	this->_energy--;
	std::cout << this->_name << " has " << this->_energy << " energy left." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitpoints -= amount;
	if (this->_hitpoints <= 0)
		this->_hitpoints = 0;
	std::cout << this->_name << " takes " << amount << " damage and has "
			<< this->_hitpoints << " hitpoints left." << std::endl;
	if (this->_hitpoints == 0)
		std::cout << this->_name << " explodes in a storm of fire and shouts for one last time: "
				<< "\"Argh arghargh death gurgle gurglegurgle urgh... death.\"" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitpoints < 1)
	{
		std::cout << this->_name << " can not repair itself because it is already dead." << std::endl;
		return ;
	}
	if (this->_hitpoints >= this->_maxHitpoints)
	{
		std::cout << this->_name
				<< " tries to repair itself but is already fully functional. "
				<< "It says: \"Good, I didn't want any spare parts!\"" << std::endl;
		return ;
	}
	this->_hitpoints += amount;
	if (this->_hitpoints > this->_maxHitpoints)
		this->_hitpoints = this->_maxHitpoints;
	std::cout << this->_name << " repairs itself to " << this->_hitpoints
			<< " hitpoints while mumbling: \"Holy crap, that worked?\"" << std::endl;
}
