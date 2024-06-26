// ************************************************************************** //
//                                                                            //
//                Account.hpp for GlobalBanksters United                //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //


#pragma once
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

class Account {


public:

	typedef Account		t;

	static int	getNbAccounts( void );//static member function, returns total number of accounts
	static int	getTotalAmount( void );//static member function returns total amount of money in all accounts
	static int	getNbDeposits( void );//static member function retunrs total number of deposits
	static int	getNbWithdrawals( void );//static member function retunrs total number of withdrawals
	static void	displayAccountsInfos( void );//static member function displays information about all acounts

	Account( int initial_deposit );//constructor
	~Account( void );//destructor 

	void	makeDeposit( int deposit );//function to deposit money
	bool	makeWithdrawal( int withdrawal );//function to withdraw money
	int		checkAmount( void ) const;//function to check amount of money in the accounts
	void	displayStatus( void ) const;//display account current status


private:

	static int	_nbAccounts;//variable to keep track of total number of accounts
	static int	_totalAmount;//variable to keep track of total money across all accounts
	static int	_totalNbDeposits;//variable to keep track of total number of deposits
	static int	_totalNbWithdrawals;//variable to keep track of total number of withdrawals

	static void	_displayTimestamp( void );

	int				_accountIndex;//member variable to store the index of the account
	int				_amount;//member variable to store the current amount in the account
	int				_nbDeposits;//member variable store the number of deposits made tot this account
	int				_nbWithdrawals;//member variable store the number of withdrawal made from this account

	Account( void );

};



// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //


#endif /* __ACCOUNT_H__ */
