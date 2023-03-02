#include "include/ATM.h"
#include "include/BaseDisplay.h"

ATM::ATM(Bank* bank, BaseDisplay* display)
{
    myBank = bank;
    myDisplay = display;
}

void ATM::viewAccount(int accountNumber, string password)
{
    if ( !(myCurrentAccount = myBank->getAccount(accountNumber, password)) )
    {
        myDisplay->showInfoToUser("Invalid account");
    }
}

void ATM::fillUserRequest(UserRequest request, double amount)
{
    if (myCurrentAccount)
        switch (request)
        {
            case REQUEST_BALANCE:
                showBalance(); break;
            case REQUEST_DEPOSIT:
                makeDeposit(amount); break;
            case REQUEST_WITHDRAW:
                withdraw(amount); break;
        }
}

void ATM::showBalance()
{
    double bal = myCurrentAccount->getBalance();
    myDisplay->showInfoToUser("Current Balance");
    myDisplay->showBalance(bal);
}

void ATM::makeDeposit(double amount)
{
    double bal = myCurrentAccount->deposit(amount);
    myDisplay->showInfoToUser("Updated Balance");
    myDisplay->showBalance(bal);
}

void ATM::withdraw(double amount)
{
    double bal = myCurrentAccount->deposit(amount * -1.0);
    myDisplay->showInfoToUser("Updated Balance");
    myDisplay->showBalance(bal);
}

