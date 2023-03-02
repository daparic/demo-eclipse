#ifndef ACCOUNT_HXX
#define ACCOUNT_HXX

#include <string>
using namespace std;

class Account
{
    public:
    
        Account()
        {
            myAccountNumber = 0;
            myBalance = 0.0;
        }
        Account(double initial)
        {
            myAccountNumber = 0;
            myBalance = initial;
        }

        double getBalance()
        {
            return (myBalance);
        }
        int getAccountNumber() const
        {
            return (myAccountNumber);
        }

        void setAccountNumber(int num)
        {
            myAccountNumber = num;
        }
        void setPassword(const char* password)
        {
            myPassword = password;
        }
        const char* getPassword()
        {
            return (myPassword.data());
        }   
 
        double deposit(double amount);
        
        double debit(double amount);

    private:

        int myAccountNumber;
        double myBalance;
        string myPassword;
};

#endif // ACCOUNT_HXX
