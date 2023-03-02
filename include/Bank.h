#ifndef BANK_HXX
#define BANK_HXX

#include <string>
#include <vector>
using namespace std;

class Account;
class Bank
{
    public:

        Bank();
        ~Bank();

        Account* getAccount(int num, string password);
        Account* addAccount();

    private:

        vector<Account*> myAccounts;
        int myCurrentAccountNumber;
};

#endif // BANK_HXX
