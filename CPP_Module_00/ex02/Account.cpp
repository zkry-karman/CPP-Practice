/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarman <zkarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 23:25:25 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/05 15:15:31 by zkarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>
#include <ctime>

int     Account::_nbAccounts = 0;
int     Account::_totalAmount = 0;
int     Account::_totalNbDeposits = 0;
int     Account::_totalNbWithdrawals = 0;

int     Account::getNbAccounts(void) {
    return _nbAccounts;
}

int     Account::getTotalAmount(void) {
    return _totalAmount;
}

int     Account::getNbDeposits(void) {
    return _totalNbDeposits;
}

int     Account::getNbWithdrawals(void) {
    return _totalNbWithdrawals;
}

Account::~Account(void) {
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex
              << ";amount:" << this->_amount
              << ";closed" << std::endl;
}

void    Account::_displayTimestamp(void) {
    std::time_t currentTime = std::time(NULL);
    std::tm*    timeConverted = std::localtime(&currentTime);
    std::cout << "[";
    std::cout << (timeConverted->tm_year + 1900);
    std::cout << std::setfill('0') << std::setw(2) << timeConverted->tm_mon;
    std::cout << std::setfill('0') << std::setw(2) << timeConverted->tm_mday;
    std::cout << "_";
    std::cout << std::setfill('0') << std::setw(2) << timeConverted->tm_hour;
    std::cout << std::setfill('0') << std::setw(2) << timeConverted->tm_min;
    std::cout << std::setfill('0') << std::setw(2) << timeConverted->tm_sec;
    std::cout << "] ";
}

Account::Account(int initial_deposit) {
    this->_accountIndex = _nbAccounts;
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;

    _nbAccounts++;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex
              << ";amount:" << this ->_amount
              << ";created" << std::endl;
}

void    Account::displayStatus(void) const {
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex
              << ";amount:" << this->_amount
              << ";deposits:" << this->_nbDeposits
              << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

bool    Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();
    if (this->_amount < withdrawal)
    {
        std::cout << "index:" << this->_accountIndex
                  << ";p_amount:" << this->_amount
                  << ";withdrawal:refused" << std::endl;
        return false;
    }
    else{
        std::cout << "index:" << this->_accountIndex
                  << ";p_amount:" << this->_amount
                  << ";withdrawal:" << withdrawal;
        this->_amount -= withdrawal;
        this->_nbWithdrawals++;
        Account::_totalAmount -= withdrawal;
        Account::_totalNbWithdrawals++;
        std::cout << ";amount:" << this->_amount
                  << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    }
    return true;
}

void    Account::makeDeposit(int deposit) {
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex
              << ";p_amount:" << this->_amount
              << ";deposit:" << deposit;
    this->_amount += deposit;
    this->_nbDeposits++;
    Account::_totalAmount += deposit;
    Account::_totalNbDeposits++;
    std::cout << ";amount:" << this->_amount
              << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

void    Account::displayAccountsInfos() {
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts
              << ";total:" << _totalAmount
              << ";deposits:" << _totalNbDeposits
              << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}