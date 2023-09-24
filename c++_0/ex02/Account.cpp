#include "Account.hpp"

/*Static variables init and their functions*/

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void)
{
    return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
    return (_totalAmount);
}

int Account::getNbDeposits(void)
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
    return (_totalNbWithdrawals);
}

void    Account::displayAccountsInfos(void)
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts() << ";total:" \
              << Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits() \
              << ";withdrawals:" << Account::getNbWithdrawals() << "\n";
}

void    Account::_displayTimestamp(void)
{
    std::cout << "[20230906_004031] ";
}

/*Normal methods implementations*/

Account::Account(int initial_deposit)
{
    this->_accountIndex = _nbAccounts;
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;

    this->_nbAccounts++;
    this->_totalAmount += initial_deposit;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";" \
              << "amount:" << this->_amount << ";" << "created\n";
}

void    Account::displayStatus(void) const
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" \
              << this->_amount << ";deposits:" << this->_nbDeposits \
              << ";withdrawals:" << this->_nbWithdrawals << "\n";
}

void    Account::makeDeposit(int deposit)
{
    this->_nbDeposits++;
    this->_totalAmount += deposit;
    this->_totalNbDeposits++;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" \
              << this->_amount << ";deposit:" << deposit \
              << ";amount:" << this->_amount + deposit << ";nb_deposits:" \
              << this->_nbDeposits << "\n";
    this->_amount += deposit;
}

int Account::checkAmount(void) const
{
    return (this->_amount);
}

bool    Account::makeWithdrawal(int withdrawal)
{
    if (this->checkAmount() < withdrawal)
    {
        Account::_displayTimestamp();
        std::cout << "index:" << this->_accountIndex << ";p_amount:" \
                  << this->_amount << ";withdrawal:refused\n";
        return (0);
    }
    this->_nbWithdrawals++;
    this->_totalAmount -= withdrawal;
    this->_totalNbWithdrawals++;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" \
              << this->_amount << ";withdrawal:" << withdrawal \
              << ";amount:" << this->_amount - withdrawal << ";nb_withdrawals:" \
              << this->_nbWithdrawals << "\n";
    this->_amount -= withdrawal;
    return (1);
}

Account::~Account(void)
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" \
              << this->_amount << ";closed\n";
}