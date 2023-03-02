#include "include/BaseDisplay.h"

#include <iostream>
using namespace std;

void BaseDisplay::showInfoToUser(const char* message)
{
    if (message)
    {
        cout << message ;
    }
}

void BaseDisplay::showBalance(double balance)
{
    cout << " : " << balance << endl;
}

