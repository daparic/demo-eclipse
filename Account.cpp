#include "include/Account.h"

double Account::deposit(double amount)
{
    myBalance += amount;
    return (getBalance());
}


double Account::debit(double amount)
{
    myBalance -= amount;
    return (getBalance());
}
