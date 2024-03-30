/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 11:51:31 by paula             #+#    #+#             */
/*   Updated: 2024/03/30 12:40:53 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account( void )
{
}

Account::Account( int initial_deposit )
{
    
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
    
}

void	Account::makeDeposit( int deposit )
{
    
}

bool	Account::makeWithdrawal( int withdrawal )
{
    
}

int		Account::checkAmount( void ) const
{
    
}

void	Account::displayStatus( void ) const
{
    
}

void	Account::_displayTimestamp( void )
{
    
}