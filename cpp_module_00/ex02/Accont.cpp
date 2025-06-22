#include "Account.hpp"

int Account::_nbAccounts;
int Account::_totalAmount;
int Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;

Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;

    _nbAccounts++;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << initial_deposit << ";created" << std::endl;
}

Account::~Account(void)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void Account::_displayTimestamp(void)
{
    std::time_t time = std::time(0);
    std::tm *localtime = std::localtime(&time);
    std::cout << std::setfill('0') << '[' << localtime->tm_year + 1900
              << std::setw(2) << localtime->tm_mon + 1 << std::setw(2)
              << localtime->tm_mday << std::setw(2) << '_'
              << localtime->tm_hour << std::setw(2)
              << localtime->tm_min << std::setw(2)
              << localtime->tm_sec << std::setw(2) << "] ";
}

int Account::getNbAccounts(void)
{
    return _nbAccounts;
}

int Account::getTotalAmount(void)
{
    return _totalAmount;
}

int Account::getNbDeposits(void)
{
    return _totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
    return _totalNbWithdrawals;
}

void    Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:"
              << _nbAccounts
              << ";total:"
              << _totalAmount
              << ";deposits:"
              << _totalNbDeposits
              << ";withdrawals:"
              << _totalNbWithdrawals
              << std::endl;
}

void    Account::makeDeposit( int deposit )
{
    _totalNbDeposits++;
    _nbDeposits++;
    _amount += deposit;
    _totalAmount += deposit;
    _displayTimestamp();
    std::cout << "index:"
              << _accountIndex
              << ";p_amount:"
              << _amount - deposit
              << ";deposit:"
              << deposit
              << ";amount:"
              << _amount
              << ";nb_deposits:"
              << _nbDeposits
              << std::endl;
}

void Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:"
    << _accountIndex 
    << ";amount:"
    << _amount
    << ";deposits:"
    << _nbDeposits
    << ";withdrawals:"
    << _nbWithdrawals 
    << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    if (withdrawal <= _amount)
    {
        _amount -= withdrawal;
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        _totalAmount -= withdrawal;
        std::cout << "index:" 
        << _accountIndex 
        << ";p_amount:" 
        << _amount + withdrawal
        << ";withdrawal:" 
        << withdrawal
        << ";amount:"
        << _amount
        << ";nb_withdrawals:"
        << _nbWithdrawals
        << std::endl;
        return true;
    }
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
    return false;
}

int		Account::checkAmount( void ) const
{
    return _amount;
}
