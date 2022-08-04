/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahla <amahla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 18:55:58 by amahla            #+#    #+#             */
/*   Updated: 2022/08/04 14:38:09 by amahla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>
//#include <chrono>

using std::cout;
using std::cin;
using std::endl;

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::_displayTimestamp(void)
{
	std::time_t		tt = std::time(0);
	struct std::tm  *when = std::localtime(&tt);
	char			buf[80];

	strftime(buf, sizeof(buf), "[%G%m%d_%I%M%S] ", when);
	cout << buf;
}

Account::Account(void)
{
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_accountIndex = _nbAccounts++;

	_displayTimestamp();
	cout << "index:" << _accountIndex;
	cout << ";amount:" << _amount;
	cout << ";created" << endl;
}

Account::Account(int initial_deposit)
{
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_accountIndex = _nbAccounts++;
	_totalAmount += _amount;

	_displayTimestamp();
	cout << "index:" << _accountIndex;
	cout << ";amount:" << _amount;
	cout << ";created" << endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	cout << "index:" << _accountIndex;
	cout << ";amount:" << _amount;
	cout << ";closed" << endl;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	cout << "account:" << _nbAccounts;
	cout << ";total:" << _totalAmount;
	cout << ";deposits:" << _totalNbDeposits;
	cout << ";withdrawals:" << _totalNbWithdrawals << endl;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	cout << "index:" << _accountIndex;
	cout << ";amount:" << _amount;
	cout << ";deposits:" << _nbDeposits;
	cout << ";withdrawals:" << _nbWithdrawals << endl;
}

int	Account::checkAmount(void) const
{
	return (_amount);
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	cout << "index:" << _accountIndex;
	cout << ";p_amount:" << _amount;
	cout << ";deposit:" << deposit;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	cout << ";amount:" << _amount;
	cout << ";nb_deposits:" << _nbDeposits << endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	cout << "index:" << _accountIndex;
	cout << ";p_amount:" << _amount;
	if (_amount - withdrawal < 0)
	{
		cout << ";withdrawal:refused" << endl;
		return (false);
	}
	cout << ";withdrawal:" << withdrawal;
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	cout << ";amount:" << _amount;
	cout << ";nb_withdrawals:" << _nbWithdrawals << endl;
	return (true);
}
