/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocartier <ocartier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 11:12:26 by ocartier          #+#    #+#             */
/*   Updated: 2022/05/07 17:18:22 by ocartier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <ctime>
# include "Account.hpp"

Account::Account(int initial_deposit)
{
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts += 1;
	this->_amount = initial_deposit;
	Account::_totalAmount += this->_amount;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
	return ;
}

Account::~Account(void)
{
	Account::_nbAccounts--;
	Account::_totalAmount -= this->_amount;
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
	return ;
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount
		<< ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	this->_amount += deposit;
	this->_nbDeposits += 1;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits += 1;
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount - deposit << ";deposit:"
		<< deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (this->_amount < withdrawal)
	{
		Account::_displayTimestamp();
		std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;
		return false;
	}
	else
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals += 1;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals += 1;
		Account::_displayTimestamp();
		std::cout << " index:" << this->_accountIndex << ";p_amount:" << this->_amount + withdrawal << ";withdrawal:"
		<< withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return true;
	}
}

int	Account::checkAmount( void ) const
{
	return this->_amount;
}

void	Account::_displayTimestamp(void)
{
	std::time_t	timer = std::time(NULL);
	std::tm		*local_timer = std::localtime(&timer);
	char		timestamp[16];

	strftime(timestamp, sizeof(timestamp), "%Y%m%d_%H%M%S", local_timer);
	std::cout << "[" << timestamp << "]";
}

int	Account::getNbAccounts(void)
{
	return Account::_nbAccounts;
}

int	Account::getTotalAmount(void)
{
	return Account::_totalAmount;
}

int	Account::getNbDeposits(void)
{
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals(void)
{
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << " accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount << ";deposits:"
		<< Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
