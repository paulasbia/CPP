/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 11:51:31 by paula             #+#    #+#             */
/*   Updated: 2024/03/30 14:31:35 by paula            ###   ########.fr       */
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
        (void)deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    if (withdrawal > _totalAmount)
        return false;
    else
    {
        _totalAmount -= withdrawal;
        return true;
    }
}

int		Account::checkAmount( void ) const
{
    return 0;
}

void	Account::displayStatus( void ) const
{
    
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