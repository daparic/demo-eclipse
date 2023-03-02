#include "include/TestObjectFactory.h"

#include "include/Account.h"
#include "include/Bank.h"

TestObjectFactory* TestObjectFactory::theInstance = NULL;

Bank* TestObjectFactory::bankWithTwoAccounts()
{
    Bank* bank = new Bank;
    Account* account1 = bank->addAccount();
    account1->setPassword("password1");
    Account* account2 = bank->addAccount();
    account2->setPassword("password2");
    return bank;
}

TestObjectFactory* TestObjectFactory::getInstance()
{
    if (NULL == theInstance)
    {
        theInstance = new TestObjectFactory;
    }
    return theInstance;
}
