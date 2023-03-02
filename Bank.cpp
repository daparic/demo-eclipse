#include "include/Bank.h"
#include "include/Account.h"

Bank::Bank() : myAccounts()
{
	myCurrentAccountNumber = 0;
}
        
Bank::~Bank()
{
    // NYI: Clean up account list
}

// Get acount number. Only return valid object if password is correct
Account* Bank::getAccount(int num, string password)
{
    Account* userAccount = NULL;
    if (myAccounts.size() > num)
    {
        userAccount = (Account*)myAccounts[num];
    }
    if ((userAccount != NULL) && (password.compare(userAccount->getPassword()) != 0))
    {
        // account wrong if account number does not match
        userAccount = NULL;
    }
    // No account with this number/password exists!!!
    return NULL;

}

// Create a new account and return a reference to it
Account* Bank::addAccount()
{
    Account* userAccount = new Account();
    userAccount->setAccountNumber(myCurrentAccountNumber++);
    myAccounts.push_back(userAccount);
    return userAccount;
}

