/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 17:14:35 by ablaamim          #+#    #+#             */
/*   Updated: 2022/12/13 17:15:05 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

/* Init static class members to 0*/

int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

Account::Account(void)
{
}

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:";
	std::cout << this->_amount << ";created" << std::endl;
}

/*
** Function to print the current date and time. (timestamp)
*/

void	Account::_displayTimestamp()
{
	time_t now = time(0);

	tm *ltm = localtime(&now);
	if ((1 + ltm->tm_mon) < 10)
		std::cout << "[" << 1900 + ltm->tm_year << "0" << 1 + ltm->tm_mon;
	else
		std::cout << "[" << 1900 + ltm->tm_year << 1 + ltm->tm_mon;
	if (ltm->tm_mday < 10)
		std::cout << "0" << ltm->tm_mday << "_";
	else
		std::cout << ltm->tm_mday << "_";
	if ((ltm->tm_hour) < 10)
		std::cout << "0" << ltm->tm_hour;
	else
		std::cout << ltm->tm_hour;
	if (ltm->tm_min < 10)
		std::cout << "0" << ltm->tm_min;
	else
		std::cout << ltm->tm_min;
	if (ltm->tm_sec < 10)
		std::cout << "0" << ltm->tm_sec << "] ";
	else
		std::cout << ltm->tm_sec << "] ";
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:";
	std::cout << this->_amount << ";closed" << std::endl;
	Account::_nbAccounts--;
	Account::_totalAmount -= this->_amount;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";total:"; 
	std::cout << Account::_totalAmount << ";deposits:";
	std::cout << Account::_totalNbDeposits << ";withdrawals:";
	std::cout << Account::_totalNbWithdrawals << std::endl;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits << ";withdrawals:";
	std::cout << this->_nbWithdrawals << std::endl;
}

/*
** This method calculs the new amount of the account by adding the previous
** amount and the deposit.
** Then a log message is printed and the values are updated.
*/

void	Account::makeDeposit( int deposit )
{
	int newAmount;

	newAmount = this->_amount + deposit;
	this->_nbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:";
	std::cout << this->_amount << ";deposit:" << deposit << ";amount:";
	std::cout << newAmount << ";nb_deposits:" << this->_nbDeposits;
	std::cout << std::endl;
	this->_amount = newAmount;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
}

/*
** This method calculs the new amount of the account by substracting the
** previous amount and the withdraw.
** If the new amount is more or equal to 0, then the withdraw is possible.
** A log message is printed and the values are updated.
** Otherwise, if the amount is negative, the withdraw is not possible.
** The withdraw is rejected.
*/

bool	Account::makeWithdrawal( int withdrawal )
{
	int newAmount;

	newAmount = this->_amount - withdrawal;
	_displayTimestamp();
	if (newAmount >= 0)
	{
		this->_nbWithdrawals++;
		std::cout << "index:" << this->_accountIndex << ";p_amount:";
		std::cout << this->_amount << ";withdrawal:" << withdrawal;
		std::cout << ";amount:" << newAmount << ";nb_withdrawals:";
		std::cout << this->_nbWithdrawals << std::endl;
		this->_amount = newAmount;
		Account::_totalNbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		return (true);
	}
	else
	{
		std::cout << "index:" << this->_accountIndex << ";p_amount:";
		std::cout << this->_amount << ";withdrawal:refused" << std::endl;
		return (false);
	}
}

/*
** Bastard function.
*/

int		Account::checkAmount( void ) const
{
	if (this->_amount > 0)
		return (1);
	else
		return (0);
}
