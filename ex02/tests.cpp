// ************************************************************************** //
//                                                                            //
//                tests.cpp for GlobalBanksters United                        //
//                Created on  : Thu Nov 20 23:45:02 1989                      //
//                Last update : Wed Jan 04 09:23:52 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

#include <vector>
#include <algorithm>
#include <functional>
#include "Account.hpp"


int		main( void ) {

	typedef std::vector<Account::t>							  accounts_t;
	typedef std::vector<int>								  ints_t;
	// std::vector: Dynamically sized arrays to store data like accounts, deposits, and withdrawals.
	typedef std::pair<accounts_t::iterator, ints_t::iterator> acc_int_t;
	// std::pair: Combines two iterators for parallel traversal. used to traverse through accounts and
	// corresponding deposit and withdrawl amounts in parralells

// Initialisation of accounts
	int	const				amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576 };
	// array of ints with initial balances of the account
	size_t const			amounts_size( sizeof(amounts) / sizeof(int) );
	accounts_t				accounts( amounts, amounts + amounts_size );
	// vector created from amounts array, contains Account objects initialised with these balances
	accounts_t::iterator	acc_begin	= accounts.begin();
	accounts_t::iterator	acc_end		= accounts.end();
	// a std::vector provides iterators that act as pointers to the elements of the vector. 
	// Iterators allow traversal of the vector in a manner similar to working with raw pointers 
	// accounts.begin returns an iterator pointing to the first element of the vector accounts

// deposits
	int	const			d[]			= { 5, 765, 564, 2, 87, 23, 9, 20 };
	// array of ints representing deposit amounts
	size_t const		d_size( sizeof(d) / sizeof(int) );
	ints_t				deposits( d, d + d_size );
	// vector created from deposits array
	ints_t::iterator	dep_begin	= deposits.begin();
	ints_t::iterator	dep_end		= deposits.end();

// withdrawls
	int	const			w[]			= { 321, 34, 657, 4, 76, 275, 657, 7654 };
	size_t const		w_size( sizeof(w) / sizeof(int) );
	ints_t				withdrawals( w, w + w_size );
	ints_t::iterator	wit_begin	= withdrawals.begin();
	ints_t::iterator	wit_end		= withdrawals.end();

	Account::displayAccountsInfos(); // displayAccountsInfos
	// method that displays info about all accounts
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) ); // displayStatus
	// applies the displayStatus method to every account in the vector (displays things as current balance)
	// std::for_each: Applies a function to every element in a range.

//------------------//
	for ( acc_int_t it( acc_begin, dep_begin );
		  it.first != acc_end && it.second != dep_end;
		  ++(it.first), ++(it.second) ) {

		(*(it.first)).makeDeposit( *(it.second) ); // makeDeposit
	}
	// iterates over accounts and deposits, depositing the corresponding amount into each account
	// acc_int_t combines iterators, one points to current account, the other to current deposit amount
	// loops over them as long as the end of the array has not been reached
	// for each loop the the value pointed to from it.second (the deposit amount) is added to the corresponding account

	Account::displayAccountsInfos(); // displayAccountsInfos
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) ); // displayStatus

//------------------//
	for ( acc_int_t it( acc_begin, wit_begin );
		  it.first != acc_end && it.second != wit_end;
		  ++(it.first), ++(it.second) ) {

		(*(it.first)).makeWithdrawal( *(it.second) ); // makeWithdrawal
	}
	// same as the makeDeposit method just with withdrawls

	Account::displayAccountsInfos(); // displayAccountsInfos
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) ); // displayStatus

	return 0;
}


// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //
