/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 11:51:31 by paula             #+#    #+#             */
/*   Updated: 2024/03/30 15:16:56 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

int				Account::_nbAccounts = 0;
int				Account::_totalAmount = 0;
int				Account::_totalNbDeposits = 0;
int				Account::_totalNbWithdrawals = 0;

Account::Account( void )
{
}

Account::Account( int initial_deposit )
{
    _displayTimestamp();
    _amount = initial_deposit;
    _totalAmount += _amount;
    _accountIndex = _nbAccounts;
    std::cout << " index:" << _accountIndex 
            << ";amount:" << _amount 
            << ";created" << std::endl;
    _nbAccounts += 1;
}

Account::~Account( void )
{
    
}

int	Account::getNbAccounts( void )
{
    return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
    return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
    return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << " accounts:" << getNbAccounts() 
            << ";total:" << getTotalAmount() 
            << ";deposits:" << getNbDeposits() 
            << ";withdrawls:" << getNbWithdrawals() 
            << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    _nbDeposits += 1;
    _displayTimestamp();
    std::cout << " index:" << _accountIndex
            << ";p_amount:" << _amount 
            << ";deposits:" << deposit
            << ";amount:" << _amount + deposit
            << ";nb_deposits:" << _nbDeposits
            << std::endl;
    _amount += deposit;
    _totalNbDeposits++;
    _totalAmount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex
        << ";p_amount:" << _amount
        << ";withdrawal:" << std::flush;
    if (withdrawal > checkAmount())
    {
        std::cout << "refused" << std::endl;
        return false;
    }
    std::cout << withdrawal << std::flush;
    _nbWithdrawals++;
    std::cout << ";amout:" << _amount - withdrawal
            << ";nb_withdrawal:" << _nbWithdrawals
            << std::endl;
    _amount -= withdrawal;
    _totalAmount -=withdrawal;
    _totalNbWithdrawals++;
    return true;
}

int		Account::checkAmount( void ) const
{
    return _amount;
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex
        << ";amount:" << _amount 
        << ";deposits:" << _nbDeposits
        << ";withdrawls:" << _nbWithdrawals
        << std::endl;
}

// Visit http://en.cppreference.com/w/cpp/chrono/c/strftime
// for more information about date/time format
void	Account::_displayTimestamp( void )
{   
    time_t now = time(0); // get current date and time  

    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y%m%d_%H%M%S", &tstruct);
    std::cout << "[";
    std::cout << buf;
    std::cout << "]";
}