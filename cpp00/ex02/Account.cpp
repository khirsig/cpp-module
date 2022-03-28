/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khirsig <khirsig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 12:26:30 by khirsig           #+#    #+#             */
/*   Updated: 2022/03/11 15:22:23 by khirsig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <chrono>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account()
{
	this->_accountIndex = this->_nbAccounts;
	++this->_nbAccounts;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			<< ";amount:" << this->_amount
			<< ";created" << std::endl;
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = this->_nbAccounts;
	++this->_nbAccounts;
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			<< ";amount:" << this->_amount
			<< ";created" << std::endl;
}

Account::~Account()
{
	--this->_nbAccounts;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			<< ";amount:" << this->_amount
			<< ";closed" << std::endl;
}

void	Account::_displayTimestamp()
{
	std::time_t currentTime = time(nullptr);
	std::tm time = *std::localtime(&currentTime);

	std::cout << "[" << std::setfill('0') << time.tm_year + 1900
			<< std::setw(2) << time.tm_mon + 1
			<< std::setw(2) << time.tm_mday << "_"
			<< std::setw(2) << time.tm_hour
			<< std::setw(2) << time.tm_min
			<< std::setw(2) << time.tm_sec << "] ";
}

int		Account::getNbAccounts()
{
	return (_nbAccounts);
}

int		Account::getTotalAmount()
{
	return (_totalAmount);
}

int		Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int		Account::getNbWithdrawals()
{
	return(_totalNbWithdrawals);
}

void	Account::displayAccountsInfos()
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts
			<< ";total:" << _totalAmount
			<< ";deposits:" << _totalNbDeposits
			<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	int	pre_amount = this->_amount;
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	Account::_displayTimestamp();
	std::cout << "index:" <<  this->_accountIndex
			<< ";p_amount:" << pre_amount
			<< ";deposit:" << deposit
			<< ";amount:" << this->_amount
			<< ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (this->_amount - withdrawal < 0)
	{
		Account::_displayTimestamp();
		std::cout << "index:" <<  this->_accountIndex
				<< ";p_amount:" << this->_amount
				<< ";withdrawal:refused" << std::endl;
		return (0);
	}
	int	pre_amount = this->_amount;
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;
	Account::_displayTimestamp();
	std::cout << "index:" <<  this->_accountIndex
			<< ";p_amount:" << pre_amount
			<< ";withdrawal:" << withdrawal
			<< ";amount:" << this->_amount
			<< ";nb_withdrawals:" << this->_nbDeposits << std::endl;
	return (1);
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
			<< this->_amount << ";deposits:" << this->_nbDeposits
			<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}
