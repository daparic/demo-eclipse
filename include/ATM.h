#ifndef ATM_HXX
#define ATM_HXX

#include "Account.h"
#include "Bank.h"

#include <string>
using namespace std;

class BaseDisplay;

class ATM
{
    public:

        enum UserRequest {
            REQUEST_INVALID = 0,
            REQUEST_BALANCE = 1,
            REQUEST_DEPOSIT,
            REQUEST_WITHDRAW
        };

        ATM(Bank* bank, BaseDisplay* display);
        void viewAccount(int accountNumber, string password);
        void fillUserRequest(UserRequest request, double amount);

    private:

        void showBalance();
        void makeDeposit(double amount);
        void withdraw(double amount);

       	Account* myCurrentAccount;
        Bank* myBank;
        BaseDisplay* myDisplay;

};

#endif // ATM_HXX
