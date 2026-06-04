/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karmanz <karmanz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 23:25:25 by karmanz           #+#    #+#             */
/*   Updated: 2026/06/04 23:41:55 by karmanz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Account.hpp>
#include <iostream>
#include <ctime>
#include <iomanip>

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

void    Account::displayAccountsInfos() {
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts
              << ";total:" << _totalAmount
              << ";deposits:" << _totalNbDeposits
              << ";withdrawals" << _totalNbWithdrawals << std::endl;
}