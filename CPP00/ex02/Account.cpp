#include "Account.hpp"
#include <sys/time.h>

Account::_nbAccounts=0;
Account::_totalAmount=0;
Account::_totalNbDeposits= 0;
Account::_totalNbWithdrawals=0;

Account::Account( int initial_deposit )
{
	this._amount = initial_deposit;
	(this._nbAccounts)++;
	(this._totalAmount) += this._amount;
	cout << "index:" << this._accountIndex << ";";
	cout << "amount:" << initial_deposit << ";";
	cout << "created";
	cout << endl;
}

Account::~Account( void )
{
	cout << "index:" << this._accountIndex << ";";
	cout << "amount:" << this._totalAmount << ";";
	cout << "closed";
	cout << endl;
}

static int	getNbAccounts( void )
{
	return (this._nbAccounts);
}

static int	getTotalAmount( void )
{
	return (this._totalAmount);
}

static int	getNbDeposits( void )
{
	return (this._totalNbDeposits);
}

static int	getNbWithdrawals( void )
{
	return (this._totalNbWithdrawals)
}

static void	displayAccountsInfos( void )
{
	_displayTimestamp();
	cout << "accounts:" << getNbAccounts << ';';
	cout << "total:" << getTotalAmount << ';';
	cout << "deposits:" << getNbDeposits << ';';
	cout << "withdrawls:" << getNbWithdrawals << ';';
	cout << endl;
}

static void Account::_displayTimestamp( void )
{
	timeval	time;

	gettimeofday(&time, NULL):
	cout << "[" << time.tv_sec << "_" << time.tv_usec << "] ";
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	cout << "index:" << this._accountIndex << ";";
	cout << "p_amount:" << this._amount << ";";
	this._amount += deposit;
	cout << "deposits:" << deposit << ";";
	cout << "amount:" << this._amount << ";";
	cout << "nb_deposits:" << this._nbDeposits;
	this._totalNbDeposits += 1;
	this._totalAmount += deposit;
	cout << endl;
}

bool	Account::makeWithdrawal ( int withdrawal )
{
	_displayTimestamp();
	cout << "index:" << this._accountIndex << ";";
	cout << "p_amount:" << this._amount << ";";
	if (withdrawal <= this._amount)
	{
		cout << "withdrawal:" << withdrawal << ";";
		this._amount -= withdrawal;
		cout << "amount:" << this._amount << ";";
		cout << "nb_withdrawals:" << this._nbWithdrawals
		this._totalNbWithdrawals += 1;
		this._totalAmount -= withdrawal;
	}
	else
	{
		cout << "withdrawal:" << "refused";
	}
	cout << endl;
}

void	displayStatus( void )
{
	_displayTimestamp();
	cout << "index:" << this._accountIndex << ";";
	cout << "amount:" << this._amount << ";";
	cout << "deposits:" << this._nbDeposits << ";";
	cout << "withdrawls:" << this._nbWithdrawals << ";";
	cout << endl;
}
